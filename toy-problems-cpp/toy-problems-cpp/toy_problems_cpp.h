/*
 *  toy_problems_cpp.h
 *  toy-problems-cpp
 *
 *  Created by David Raleigh on 1/22/15.
 *  Copyright (c) 2015 David Raleigh. All rights reserved.
 *
 */

#ifndef toy_problems_cpp_
#define toy_problems_cpp_

#include <vector>
/* The classes below are exported */
#pragma GCC visibility push(default)

class toy_problems_cpp
{
	public:
        static std::vector<int> noOdds(std::vector<int> values);
        static bool isPowerOf4(int value);
        static bool nonRecursivePow4(int value);
        static uint64_t factorialDivision(uint64_t numerator, uint64_t denominator);
        static std::vector<size_t> greatestNonAdjacentWeights(std::vector<double> weights);
};

#pragma GCC visibility pop
#endif
