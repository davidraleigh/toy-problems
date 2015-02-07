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
        static std::vector<int> noOdds(const std::vector<int>& values);
        static bool isPowerOf4(int value);
        static bool nonRecursivePow4(int value);
        static uint64_t factorialDivision(uint64_t numerator, uint64_t denominator);
        static std::vector<size_t> greatestNonAdjacentWeights(const std::vector<double>& weights);
        static std::vector<uint64_t> sumOfSquaresShortestSet(uint64_t totalValue);
        static std::vector<std::vector<uint64_t>> sumOfSquaresAllSets(uint64_t totalValue);
};

#pragma GCC visibility pop
#endif
