#include "toy_problems_cpp.h"

#include <cmath>
#include <numeric>
#include <algorithm>

toy_problems_cpp::toy_problems_cpp(){
    
}

std::vector<int> toy_problems_cpp::noOdds(const std::vector<int>& values)
{
    std::vector<int> evens;
    for (int i = 0; i < values.size(); i++)
    {
        if ((values[i] & 1) == 0)
            evens.push_back(values[i]);
    }
    
    return evens;
}

//http://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetParallel
int bitCount(unsigned int value)
{
    unsigned int c; // store the total here
    static const int S[] = {1, 2, 4, 8, 16}; // Magic Binary Numbers
    static const int B[] = {0x55555555, 0x33333333, 0x0F0F0F0F, 0x00FF00FF, 0x0000FFFF};
    
    c = value - ((value >> 1) & B[0]);
    c = ((c >> S[1]) & B[1]) + (c & B[1]);
    c = ((c >> S[2]) + c) & B[2];
    c = ((c >> S[3]) + c) & B[3];
    c = ((c >> S[4]) + c) & B[4];
    
    return c;
}

unsigned int msb32(unsigned int x)
{
    static const unsigned int bval[] =
    {0,1,2,2,3,3,3,3,4,4,4,4,4,4,4,4};
    
    unsigned int r = 0;
    if (x & 0xFFFF0000) { r += 16/1; x >>= 16/1; }
    if (x & 0x0000FF00) { r += 16/2; x >>= 16/2; }
    if (x & 0x000000F0) { r += 16/4; x >>= 16/4; }
    return r + bval[x];
}

bool toy_problems_cpp::nonRecursivePow4(int value)
{
    if (bitCount(value) == 1            // if there is only one flipped bit
        && value > 3                    // if value being tested is 4 or greater
        && (msb32(value) - 1) % 2 == 0) // if the one flipped bit is at position 3, 5, 7, 9, etc...
    {
        return true;
    }
    return false;
}

bool toy_problems_cpp::isPowerOf4(int value)
{
    if (value % 4 != 0)
        return false;
    else if (value / 4 == 1)
        return true;
    
    return toy_problems_cpp::isPowerOf4(value / 4);
}

 
uint64_t toy_problems_cpp::factorialDivision(uint64_t numerator, uint64_t denominator)
{
    if (numerator < denominator)
        return 0;
    else if (numerator == denominator)
        return 1;
    
    uint64_t result = 1;
    for (uint64_t i = denominator + 1; i <= numerator; i++)
        result *= i;
    
    return result;
}

void recurseNonAdj(std::size_t currentIndex,
                   const std::vector<double> weights,/*const*/
                   std::vector<std::size_t>& currentIndices,
                   double currentWeight,
                   std::vector<std::size_t>& heaviestIndexSet,
                   double& pHeaviestWeight) /*reference since this is required*/
{
    if (currentIndex >= weights.size())
    {
        if (currentWeight > pHeaviestWeight)
        {
            pHeaviestWeight = currentWeight;
            heaviestIndexSet = currentIndices;
        }
        return;
    }
    
    // push new info on for current index
    currentIndices.push_back(currentIndex);
    currentWeight += weights[currentIndex];
    
    // recurseNonAdj into oneStep
    recurseNonAdj(currentIndex + 2,
            weights,
            currentIndices,
            currentWeight,
            heaviestIndexSet,
            pHeaviestWeight);
    
    // recurse into twoStep
    recurseNonAdj(currentIndex + 3,
            weights,
            currentIndices,
            currentWeight,
            heaviestIndexSet,
            pHeaviestWeight);
    
    // pull info off for current index
    currentIndices.pop_back();
    currentWeight -= weights[currentIndex];
}

// problem: get the indices of the set of numbers where the sum of weights
// is the largest possible sum as long as no 2 summed weights are adjacent
// assume that no weights can be negative
std::vector<size_t> toy_problems_cpp::greatestNonAdjacentWeights(const std::vector<double>& weights)
{
    std::vector<size_t> heaviestIndexSet;
    std::vector<size_t> currentIndices;
    double heaviestWeight = 0;
    double currentWeight = 0;
    
    recurseNonAdj(0,
                  weights,
                  currentIndices,
                  currentWeight,
                  heaviestIndexSet,
                  heaviestWeight);
    // recurse at index 1;
    recurseNonAdj(1,
                  weights,
                  currentIndices,
                  currentWeight,
                  heaviestIndexSet,
                  heaviestWeight);
    
    return std::move(heaviestIndexSet);
}

void recurseShortestSet(uint64_t value,
                        uint64_t maxValue,
                        std::vector<uint64_t>& set,/*make this const ?*/
                        std::vector<uint64_t>& setListOut)
{
    // by not passing by reference this copies the input array,
    // this is the desired effect in order to fill out the setListOut
    // with unique arrays.
    // optimization that any number can be expressed as a combination of 4 squares
    if (value == 0 && set.size() > 0 && set.size() < 5 )
    {
        if (setListOut.size() > set.size() || setListOut.size() == 0)
            setListOut = set;
        return;
    } else if (set.size() == 4) {
        return;
    }
    
    uint64_t biggestSqrt = std::floor(std::sqrt((double)value));
    if (biggestSqrt > maxValue)
        biggestSqrt = maxValue;
    
    while (biggestSqrt > 0)
    {
        set.push_back(biggestSqrt);
        uint64_t remainder = value - (::pow(biggestSqrt, 2));
        recurseShortestSet(remainder, biggestSqrt, set, setListOut);
        set.pop_back();
        biggestSqrt--;
    }
}

// problem: get the smallest set of numbers that when squared and
// summed equal the totalValue
std::vector<uint64_t> toy_problems_cpp::sumOfSquaresShortestSet(uint64_t totalValue)
{
    std::vector<uint64_t> setListOut;
    std::vector<uint64_t> set;
    
    recurseShortestSet(totalValue, totalValue, set, setListOut);
    
    return std::move(setListOut);
}

void recurseAllSets(uint64_t value,
                    uint64_t maxValue,
                    std::vector<uint64_t>& set,/*make this const ?*/
                    std::vector<std::vector<uint64_t>>& setListOut)
{
    // by not passing by reference this copies the input array,
    // this is the desired effect in order to fill out the setListOut
    // with unique arrays.
    if (value == 0)
    {
        setListOut.push_back(set);
        return;
    }
    
    uint64_t biggestSqrt = std::floor(std::sqrt((double)value));
    if (biggestSqrt > maxValue)
        biggestSqrt = maxValue;
    
    while (biggestSqrt > 0)
    {
        set.push_back(biggestSqrt);
        uint64_t remainder = value - (::pow(biggestSqrt, 2));
        recurseAllSets(remainder, biggestSqrt, set, setListOut);
        set.pop_back();
        biggestSqrt--;
    }
}

// problem: get all the unique sets of numbers that when squared and
// summed equal the totalValue
std::vector<std::vector<uint64_t>> toy_problems_cpp::sumOfSquaresAllSets(uint64_t totalValue)
{
    std::vector<std::vector<uint64_t>> setListOut;
    std::vector<uint64_t> set;
    recurseAllSets(totalValue, totalValue, set, setListOut);
    
    return std::move(setListOut);
}

int toy_problems_cpp::levenshteinDistance(std::string& A, std::string& B)
{
    std::vector<int> D(B.size() + 1);
    std::iota(D.begin(), D.end(), 0);
    
    for (int i = 0; i <= A.size(); i++) {
        int pre_i_1_j_1 = D[0]; // stores the value of the D at [i - 1][j - 1]
        D[0] = i;
        for (int j = 0; j <= B.size(); j++) {
            int pre_i_1_j = D[j];  // stores the value of the D at [i - 1][j]
            
            D[j] = A[i - 1] == B[j - 1] ? pre_i_1_j_1 : 1 + std::min(pre_i_1_j_1, std::min(D[j - 1], D[j]));
            pre_i_1_j_1 = pre_i_1_j;
        }
    }
    
    return D.back();
}

#define goldenRatio 1.6180339887499
#define sqrt5 2.23606797749979

std::vector<unsigned int> toy_problems_cpp::fibonacciSequence(unsigned int startInclusive, unsigned int endExclusive, bool bOnesStart)
{
    std::vector<unsigned int> results;
    
    if (bOnesStart) {
        startInclusive += 1;
        endExclusive += 1;
    }
    
    unsigned int index = startInclusive;
    
    do
    {
        // well this is weird. you have to cast from unsigned int to int for power to work. must be some crazy shit I don't understand about unsigned ints being treated like a float and then the value actually being a non-integer float
        unsigned int fibNum = (unsigned int)std::round((std::pow(goldenRatio, index) - std::pow(-goldenRatio, (int)-index)) / sqrt5);
        results.push_back(fibNum);
    } while (index++ < endExclusive);
    
    return results;
}

bool toy_problems_cpp::isPrime(unsigned int input){
    
    if (input < 2)
        return false;
    if (input == 2 || input == 3 || input == 5)
        return true;
    if (input % 2 == 0 || input % 3 == 0)
        return false;

    
    unsigned int divisor = 5;
    
    bool bigStep = false;
    unsigned int halfInput = input / 2;
    // opportunity for optimization
    while (divisor < halfInput) {
        if (input % divisor == 0)
            return false;
        if (bigStep) {
            divisor += 4;
            bigStep = false;
        } else {
            divisor += 2;
            bigStep = true;
        }
    }

    return true;
}

std::vector<unsigned int> toy_problems_cpp::getPrimes(unsigned int startInlusivish, unsigned int endExclusive){
    std::vector<unsigned int> results;
    
    while (startInlusivish < endExclusive) {
        if (toy_problems_cpp::isPrime(startInlusivish))
            results.push_back(startInlusivish);
        startInlusivish++;
    }
    
    return results;
}
