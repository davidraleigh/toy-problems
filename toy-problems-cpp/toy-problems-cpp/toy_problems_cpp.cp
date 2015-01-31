#include "toy_problems_cpp.h"

std::vector<int> toy_problems_cpp::noOdds(std::vector<int> values) {
    std::vector<int> evens;
    for (int i = 0; i < values.size(); i++) {
        if ((values[i] & 1) == 0) {
            evens.push_back(values[i]);
        }
    }
    
    return evens;
}

//http://graphics.stanford.edu/~seander/bithacks.html#CountBitsSetParallel
int bitCount(unsigned int value) {
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

bool toy_problems_cpp::nonRecursivePow4(int value) {
    if (bitCount(value) == 1            // if there is only one flipped bit
        && value > 3                    // if value being tested is 4 or greater
        && (msb32(value) - 1) % 2 == 0) // if the one flipped bit is at position 3, 5, 7, 9, etc...
    {
        return true;
    }
    return false;
}

bool toy_problems_cpp::isPowerOf4(int value) {
    if (value % 4 != 0) {
        return false;
    } else if (value / 4 == 1) {
        return true;
    }
    
    return toy_problems_cpp::isPowerOf4(value / 4);
}

uint64_t toy_problems_cpp::factorialDivision(uint64_t numerator, uint64_t denominator) {
    if (numerator < denominator) {
        return 0;
    } else if (numerator == denominator) {
        return 1;
    }
    
    uint64_t result = 1;
    for (uint64_t i = denominator + 1; i <= numerator; i++) {
        result *= i;
    }
    
    return result;
}

void recurse(std::size_t currentIndex,
             std::vector<double> weights,
             std::vector<std::size_t>& currentIndices,
             double currentWeight,
             std::vector<std::size_t>& heaviestIndexSet,
             double* pHeaviestWeight)
{
    if (currentIndex >= weights.size()) {
        if (currentWeight > (*pHeaviestWeight)) {
            (*pHeaviestWeight) = currentWeight;
            heaviestIndexSet.assign(currentIndices.begin(),currentIndices.end());
        }
        return;
    }
    
    // push new info on for current index

    currentIndices.push_back(currentIndex);
    currentWeight += weights[currentIndex];
    
    // recurse into oneStep
    recurse(currentIndex + 2,
            weights,
            currentIndices,
            currentWeight,
            heaviestIndexSet,
            pHeaviestWeight);
    
    // recurse into twoStep
    recurse(currentIndex + 3,
            weights,
            currentIndices,
            currentWeight,
            heaviestIndexSet,
            pHeaviestWeight);
    
    // pull info off for current index
    currentIndices.pop_back();
    currentWeight -= weights[currentIndex];
}


std::vector<size_t> toy_problems_cpp::greatestNonAdjacentWeights(std::vector<double> weights) {
    std::vector<size_t> heaviestIndexSet;
    std::vector<size_t> currentIndices;
    double heaviestWeight = 0;
    double currentWeight = 0;
    double *pHeaviestWeight = &heaviestWeight;
    
    
    recurse(0,
            weights,
            currentIndices,
            currentWeight,
            heaviestIndexSet,
            pHeaviestWeight);
    // recurse at index 1;
    recurse(1,
            weights,
            currentIndices,
            currentWeight,
            heaviestIndexSet,
            pHeaviestWeight);
    
    return heaviestIndexSet;
}

