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
};

#endif
