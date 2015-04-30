//
//  CoinSums.cpp
//  toy-problems-cpp
//
//  Created by David Raleigh on 4/30/15.
//  Copyright (c) 2015 David Raleigh. All rights reserved.
//

#include "CoinSums.h"

#include <cmath>

CoinSums::CoinSums(){
    
}

// probably better to use move semantics
CoinSums::CoinSums(std::vector<unsigned int> coinSet){
    std::copy(coinSet.begin(), coinSet.end(), std::back_inserter(m_currencySet));
//    m_currencySet.insert(coinSet.begin(), coinSet.end());
}

std::vector<unsigned int> CoinSums::GetCoinSum(double amount)
{
    std::vector<unsigned int> results;

//    std::vector<unsigned int>::iterator iter;
//    for (iter = m_currencySet.begin(); iter != m_currencySet.end(); iter++) {
//        unsigned int value = *iter;
//        results.push_back(value);
//    }
    return results;
}

void CoinSums::_Recurse(unsigned int amount, std::size_t index, unsigned int *ptr) {
    if (amount == 0) {
        *ptr += 1;
        return;
    }
    
    for (std::size_t i = index; i < m_currencySet.size(); i++) {
        if (m_currencySet[i] > amount)
            continue;
        _Recurse(amount - m_currencySet[i], i, ptr);
    }
//    
//    for (;iterPos != m_currencySet.rend(); ++iterPos) {
//        if (*iterPos > amount)
//            continue;
//        _Recurse(amount - *iterPos, iterPos, ptr);
//    }
}

unsigned int CoinSums::GetVariationCount(double amount)
{
    // 3.00
    amount = ::round(amount * 100);
    unsigned int amountInt = (unsigned int)amount;
    unsigned int *tallyPtr;
    unsigned int tally = 0;
    tallyPtr = &tally;
    
    //std::set<unsigned int>::reverse_iterator iter = m_currencySet.rbegin();
    _Recurse(amountInt, 0, tallyPtr);
    return *tallyPtr;
}

