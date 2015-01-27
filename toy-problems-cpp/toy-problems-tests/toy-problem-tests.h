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
};

#endif
