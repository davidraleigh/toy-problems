//
//  toy-problem-tests.h
//  toy-problems-cpp
//
//  Created by David Raleigh on 1/22/15.
//  Copyright (c) 2015 David Raleigh. All rights reserved.
//

#ifndef toy_problems_cpp_toy_problem_tests_h
#define toy_problems_cpp_toy_problem_tests_h

#include <cxxtest/TestSuite.h>

#include "toy_problems_cpp.h"
#include "CoinSums.h"

class ToyProblemTestSuite : public CxxTest::TestSuite
{
public:
    void setUp()
    {
    }
    
    void tearDown()
    {
    }
    
    void testNoOdds(void)
    {
        std::vector<int> numbers;
        numbers.push_back(1);
        std::vector<int> noOdds = toy_problems_cpp::noOdds(numbers);
        TS_ASSERT_EQUALS(noOdds.size(), 0);
        numbers.push_back(0);
        noOdds = toy_problems_cpp::noOdds(numbers);
        TS_ASSERT_EQUALS(noOdds.size(), 1);
        numbers.push_back(2);
        noOdds = toy_problems_cpp::noOdds(numbers);
        TS_ASSERT_EQUALS(noOdds.size(), 2);
        for (int i = 0; i < noOdds.size(); i++) {
            TS_ASSERT_EQUALS(noOdds[i] % 2, 0);
            TS_ASSERT_EQUALS(noOdds[i], i * 2);
        }
        numbers.push_back(3);
        noOdds = toy_problems_cpp::noOdds(numbers);
        TS_ASSERT_EQUALS(noOdds.size(), 2);
        for (int i = 0; i < noOdds.size(); i++) {
            TS_ASSERT_EQUALS(noOdds[i] % 2, 0);
            TS_ASSERT_EQUALS(noOdds[i], i * 2);
        }
        numbers.push_back(4);
        noOdds = toy_problems_cpp::noOdds(numbers);
        TS_ASSERT_EQUALS(noOdds.size(), 3);
        for (int i = 0; i < noOdds.size(); i++) {
            TS_ASSERT_EQUALS(noOdds[i] % 2, 0);
            TS_ASSERT_EQUALS(noOdds[i], i * 2);
        }
    }
    
    void testPowerOf4(void)
    {
        TS_ASSERT_EQUALS(toy_problems_cpp::isPowerOf4(4), true);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPowerOf4(12), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPowerOf4(24), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPowerOf4(1020), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPowerOf4(1024), true);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPowerOf4(4096), true);
    }
    
    void testNonRecursivePowerOf4(void)
    {
        TS_ASSERT_EQUALS(toy_problems_cpp::nonRecursivePow4(-4), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::nonRecursivePow4(0), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::nonRecursivePow4(4), true);
        TS_ASSERT_EQUALS(toy_problems_cpp::nonRecursivePow4(12), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::nonRecursivePow4(24), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::nonRecursivePow4(1020), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::nonRecursivePow4(1024), true);
        TS_ASSERT_EQUALS(toy_problems_cpp::nonRecursivePow4(4096), true);
        TS_ASSERT_EQUALS(toy_problems_cpp::nonRecursivePow4(1024 * 16), true);
        TS_ASSERT_EQUALS(toy_problems_cpp::nonRecursivePow4(4096 * 4096), true);
    }
    
    void testFactorialDivision(void)
    {
        TS_ASSERT_EQUALS(toy_problems_cpp::factorialDivision(5, 3), 20);
        TS_ASSERT_EQUALS(toy_problems_cpp::factorialDivision(10000, 9999), 10000);
        TS_ASSERT_EQUALS(toy_problems_cpp::factorialDivision(98, 90), 6345015248033280);
    }
    
    void testGreatestNonAdjacentWeights(void)
    {
        size_t aExpected []= {0};
        std::vector<double> aInputs = {5};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::greatestNonAdjacentWeights(aInputs).data(),
                            aExpected,
                            sizeof(aExpected));
        
        size_t bExpected []= {0};
        std::vector<double> bInputs = {10, 9};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::greatestNonAdjacentWeights(bInputs).data(),
                            bExpected,
                            sizeof(bExpected));
        
        size_t cExpected []= {1};
        std::vector<double> cInputs = {9, 10};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::greatestNonAdjacentWeights(cInputs).data(),
                            cExpected,
                            sizeof(cExpected));
        
        size_t dExpected []= {0};
        std::vector<double> dInputs = {10, 10};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::greatestNonAdjacentWeights(dInputs).data(),
                            dExpected,
                            sizeof(dExpected));
        
        size_t eExpected []= {0, 2};
        std::vector<double> eInputs = {10, 10, 1};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::greatestNonAdjacentWeights(eInputs).data(),
                            eExpected,
                            sizeof(eExpected));
        
        size_t fExpected []= {1};
        std::vector<double> fInputs = {10, 12, 1};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::greatestNonAdjacentWeights(fInputs).data(),
                            fExpected,
                            sizeof(fExpected));
        
        size_t gExpected []= {0, 2};
        std::vector<double> gInputs = {10, 12, 2, 0};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::greatestNonAdjacentWeights(gInputs).data(),
                            gExpected,
                            sizeof(gExpected));
        
        size_t hExpected []= {0, 3};
        std::vector<double> hInputs = {10, 9, 2, 3};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::greatestNonAdjacentWeights(hInputs).data(),
                            hExpected,
                            sizeof(hExpected));
        
        size_t jExpected []= {1, 3};
        std::vector<double> jInputs = {10, 11, 2, 3};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::greatestNonAdjacentWeights(jInputs).data(),
                            jExpected,
                            sizeof(jExpected));
        
        size_t kExpected []= {0, 2, 4};
        std::vector<double> kInputs = {10, 12, 2, 0, 4};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::greatestNonAdjacentWeights(kInputs).data(),
                            kExpected,
                            sizeof(kExpected));
        
        size_t lExpected []= {0, 3};
        std::vector<double> lInputs = {10, 9, 2, 3, 0};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::greatestNonAdjacentWeights(lInputs).data(),
                            lExpected,
                            sizeof(lExpected));
        
        size_t mExpected []= {1, 3};
        std::vector<double> mInputs = {10, 11, 2, 3, 1};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::greatestNonAdjacentWeights(mInputs).data(),
                            mExpected,
                            sizeof(mExpected));
        
        size_t nExpected []= {1, 4};
        std::vector<double> nInputs = {10, 13, 2, 3, 5};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::greatestNonAdjacentWeights(nInputs).data(),
                            nExpected,
                            sizeof(nExpected));
        
        size_t oExpected []= {0, 2};
        std::vector<double> oInputs = {9, 10, 2, 0};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::greatestNonAdjacentWeights(oInputs).data(),
                            oExpected,
                            sizeof(oExpected));
        
        size_t pExpected []= {0, 3, 5};
        std::vector<double> pInputs = {10, 10, 0, 1, 1, 1};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::greatestNonAdjacentWeights(pInputs).data(),
                            pExpected,
                            sizeof(pExpected));
        
        size_t qExpected []= {0, 3, 5};
        std::vector<double> qInputs = {10, 10, 0, 1, 1, 1};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::greatestNonAdjacentWeights(qInputs).data(),
                            qExpected,
                            sizeof(qExpected));
    }
    
    void testSumOfSquaresShortestSet(void)
    {
        std::vector<uint64_t> set = toy_problems_cpp::sumOfSquaresShortestSet(0);
        TS_ASSERT_EQUALS(set.size(), 0);
        
        uint64_t aExpected []= {1};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::sumOfSquaresShortestSet(1).data(),
                            aExpected,
                            sizeof(aExpected));

        uint64_t bExpected []= {1, 1, 1};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::sumOfSquaresShortestSet(3).data(),
                            bExpected,
                            sizeof(bExpected));

        uint64_t cExpected []= {2};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::sumOfSquaresShortestSet(4).data(),
                            cExpected,
                            sizeof(cExpected));

        uint64_t dExpected []= {2, 1};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::sumOfSquaresShortestSet(5).data(),
                            dExpected,
                            sizeof(dExpected));

        uint64_t eExpected []= {2, 2};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::sumOfSquaresShortestSet(8).data(),
                            eExpected,
                            sizeof(eExpected));
        
        uint64_t fExpected []= {3, 2, 1};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::sumOfSquaresShortestSet(14).data(),
                            fExpected,
                            sizeof(fExpected));

        uint64_t gExpected []= {6, 5};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::sumOfSquaresShortestSet(25+36).data(),
                            gExpected,
                            sizeof(gExpected));
        
        uint64_t hExpected []= {2, 2, 2};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::sumOfSquaresShortestSet(12).data(),
                            hExpected,
                            sizeof(hExpected));
    }
    
    void sumOfSquaresHelper(std::vector<std::vector<uint64_t>> results,
                            std::vector<std::vector<uint64_t>> expected) {
        for (size_t i = 0; i < expected.size(); i++) {
            TS_ASSERT_SAME_DATA(results[i].data(),
                                expected[i].data(),
                                sizeof(expected[i].size()));
        }
    }
    
    void testSumOfSquaresAllSet(void)
    {
        std::vector<std::vector<uint64_t>> aExpected = {{}};
        std::vector<std::vector<uint64_t>> aResult = toy_problems_cpp::sumOfSquaresAllSets(0);
        sumOfSquaresHelper(aResult, aExpected);

        std::vector<std::vector<uint64_t>> bExpected = {{1}};
        std::vector<std::vector<uint64_t>> bResult = toy_problems_cpp::sumOfSquaresAllSets(1);
        sumOfSquaresHelper(bResult, bExpected);
        
        std::vector<std::vector<uint64_t>> cExpected = {{1, 1, 1}};
        std::vector<std::vector<uint64_t>> cResult = toy_problems_cpp::sumOfSquaresAllSets(3);
        sumOfSquaresHelper(cResult, cExpected);
        
        std::vector<std::vector<uint64_t>> dExpected = {{2}, {1, 1, 1, 1}};
        std::vector<std::vector<uint64_t>> dResult = toy_problems_cpp::sumOfSquaresAllSets(4);
        sumOfSquaresHelper(dResult, dExpected);
        
        std::vector<std::vector<uint64_t>> eExpected = {{2, 1}, {1, 1, 1, 1, 2}};
        std::vector<std::vector<uint64_t>> eResult = toy_problems_cpp::sumOfSquaresAllSets(5);
        sumOfSquaresHelper(eResult, eExpected);
        
        std::vector<std::vector<uint64_t>> fExpected = {{2, 2}, {2, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1, 1, 1}};
        std::vector<std::vector<uint64_t>> fResult = toy_problems_cpp::sumOfSquaresAllSets(8);
        sumOfSquaresHelper(fResult, fExpected);
        
        std::vector<std::vector<uint64_t>> gExpected = {{ 3, 2, 1 }, { 3, 1, 1, 1, 1, 1 }, { 2, 2, 2, 1, 1 }, { 2, 2, 1, 1, 1, 1, 1, 1 }, { 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }, { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }};
        std::vector<std::vector<uint64_t>> gResult = toy_problems_cpp::sumOfSquaresAllSets(14);
        sumOfSquaresHelper(gResult, gExpected);
    }
    void testLevenshteinDistance(void)
    {
        std::string goal1 = "apple";
        std::string edit1 = "apple";
        int count = toy_problems_cpp::levenshteinDistance(edit1, goal1);
        TS_ASSERT_EQUALS(count, 0);
        
        std::string edit2 = "xpple";
        count = toy_problems_cpp::levenshteinDistance(edit2, goal1);
        TS_ASSERT_EQUALS(count, 1);
    }
    
    void testFibonacciaSequence(void)
    {
        unsigned int aExpected [] = {0, 1};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::fibonacciSequence(0, 2, false).data(), aExpected, sizeof(aExpected));
        
        unsigned int bExpected [] = {1, 1};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::fibonacciSequence(0, 2, true).data(), bExpected, sizeof(bExpected));
        
        unsigned int cExpected [] = {3, 5, 8};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::fibonacciSequence(4, 7, false).data(), cExpected, sizeof(cExpected));
        
        unsigned int dExpected [] = {5, 8, 13};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::fibonacciSequence(4, 7, true).data(), dExpected, sizeof(dExpected));
    }

    void testIsPrime(void)
    {
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(4), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(0), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(1), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(2), true);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(3), true);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(5), true);
        
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(6), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(7), true); //true
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(8), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(9), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(10), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(11), true);  //true

        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(12), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(13), true); //true
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(14), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(15), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(16), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(17), true); //true
        
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(18), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(19), true); //true
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(20), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(21), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(22), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(23), true); //true
        
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(24), false);
        // pattern changes here because 5 squared?
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(25), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(26), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(27), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(28), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(29), true);  //true
        
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(30), false);
        // pattern changes here because 5 squared?
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(31), true); // true
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(32), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(33), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(34), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(35), false);
        
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(36), false);
        // pattern changes here because 5 squared?
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(37), true); // true
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(38), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(39), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(40), false);
        TS_ASSERT_EQUALS(toy_problems_cpp::isPrime(41), true); // true

    }
    
    void testGetPrimes(void)
    {
        unsigned int emptyExpected [] = {};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::getPrimes(2, 3).data(), emptyExpected, sizeof(emptyExpected));
        
        unsigned int aExpected [] = {2, 3, 5};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::getPrimes(2, 6).data(), aExpected, sizeof(aExpected));
        
        unsigned int bExpected [] = {2, 3};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::getPrimes(2, 5).data(), bExpected, sizeof(bExpected));
        
        unsigned int cExpected [] = {2};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::getPrimes(2, 3).data(), cExpected, sizeof(cExpected));
        
        unsigned int dExpected [] = {};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::getPrimes(4, 5).data(), dExpected, sizeof(dExpected));
        
        unsigned int eExpected [] = {7, 11, 13, 17, 19, 23};
        TS_ASSERT_SAME_DATA(toy_problems_cpp::getPrimes(6, 29).data(), eExpected, sizeof(eExpected));
    }
    
    void testCoinSums(void)
    {             
        std::vector<unsigned int> coinSet1 = {200, 100, 50, 20, 10, 5, 2, 1}; //, 2, 5, 10, 20, 50, 100, 200
        CoinSums coin(coinSet1);
        std::vector<unsigned int> results1 = coin.GetCoinSum(3.00);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.01), 1);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.02), 2);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.01), 1);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.02), 2);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.03), 2);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.04), 3);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.05), 4);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.06), 5);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.07), 6);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.08), 7);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.09), 8);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.10), 11);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.11), 12);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.12), 15);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.13), 16);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.14), 19);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.15), 22);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.16), 25);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.17), 28);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.18), 31);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.19), 34);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.20), 41);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.21), 44);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.22), 51);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.23), 54);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.24), 61);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.25), 68);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.26), 75);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.27), 82);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.28), 89);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.29), 96);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.30), 109);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.31), 116);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.32), 129);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.33), 136);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.34), 149);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.35), 162);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.36), 175);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.37), 188);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.38), 201);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.39), 214);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.40), 236);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.41), 249);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.42), 271);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.43), 284);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.44), 306);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.45), 328);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.46), 350);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.47), 372);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.48), 394);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.49), 416);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.50), 451);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.51), 473);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.52), 508);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.53), 530);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.54), 565);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.55), 600);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.56), 635);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.57), 670);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.58), 705);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.59), 740);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.60), 793);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.61), 828);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.62), 881);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.63), 916);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.64), 969);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.65), 1022);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.66), 1075);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.67), 1128);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.68), 1181);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.69), 1234);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.70), 1311);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.71), 1364);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.72), 1441);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.73), 1494);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.74), 1571);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.75), 1648);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.76), 1725);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.77), 1802);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.78), 1879);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.79), 1956);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.80), 2064);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.81), 2141);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.82), 2249);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.83), 2326);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.84), 2434);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.85), 2542);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.86), 2650);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.87), 2758);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.88), 2866);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.89), 2974);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.90), 3121);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.91), 3229);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.92), 3376);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.93), 3484);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.94), 3631);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.95), 3778);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.96), 3925);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.97), 4072);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.98), 4219);
        TS_ASSERT_EQUALS(coin.GetVariationCount(.99), 4366);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.00), 73682);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.01), 75173);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.02), 76957);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.03), 78448);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.04), 80232);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.05), 82016);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.06), 83800);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.07), 85584);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.08), 87368);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.09), 89152);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.10), 91273);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.11), 93057);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.12), 95178);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.13), 96962);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.14), 99083);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.15), 101204);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.16), 103325);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.17), 105446);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.18), 107567);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.19), 109688);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.20), 112197);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.21), 114318);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.22), 116827);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.23), 118948);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.24), 121457);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.25), 123966);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.26), 126475);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.27), 128984);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.28), 131493);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.29), 134002);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.30), 136953);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.31), 139462);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.32), 142413);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.33), 144922);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.34), 147873);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.35), 150824);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.36), 153775);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.37), 156726);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.38), 159677);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.39), 162628);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.40), 166082);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.41), 169033);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.42), 172487);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.43), 175438);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.44), 178892);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.45), 182346);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.46), 185800);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.47), 189254);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.48), 192708);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.49), 196162);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.50), 200187);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.51), 203641);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.52), 207666);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.53), 211120);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.54), 215145);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.55), 219170);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.56), 223195);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.57), 227220);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.58), 231245);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.59), 235270);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.60), 239941);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.61), 243966);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.62), 248637);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.63), 252662);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.64), 257333);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.65), 262004);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.66), 266675);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.67), 271346);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.68), 276017);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.69), 280688);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.70), 286087);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.71), 290758);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.72), 296157);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.73), 300828);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.74), 306227);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.75), 311626);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.76), 317025);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.77), 322424);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.78), 327823);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.79), 333222);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.80), 339438);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.81), 344837);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.82), 351053);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.83), 356452);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.84), 362668);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.85), 368884);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.86), 375100);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.87), 381316);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.88), 387532);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.89), 393748);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.90), 400877);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.91), 407093);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.92), 414222);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.93), 420438);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.94), 427567);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.95), 434696);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.96), 441825);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.97), 448954);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.98), 456083);
        TS_ASSERT_EQUALS(coin.GetVariationCount(2.99), 463212);
    }
};


























#endif
