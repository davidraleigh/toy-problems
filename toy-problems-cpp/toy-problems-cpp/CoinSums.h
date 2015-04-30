//
//  CoinSums.h
//  toy-problems-cpp
//
//  Created by David Raleigh on 4/30/15.
//  Copyright (c) 2015 David Raleigh. All rights reserved.
//

#ifndef __toy_problems_cpp__CoinSums__
#define __toy_problems_cpp__CoinSums__

#include <set>
#include <vector>

#pragma GCC visibility push(default)

class CoinSums {
    std::vector<unsigned int> m_currencySet;

private:
    void _Recurse(unsigned int amount, std::size_t index, unsigned int *ptr);
public:
    CoinSums();
    CoinSums(std::vector<unsigned int> coinSet);
    std::vector<unsigned int> GetCoinSum(double amount);
    unsigned int GetVariationCount(double amount);
};

#pragma GCC visibility pop

#endif /* defined(__toy_problems_cpp__CoinSums__) */
