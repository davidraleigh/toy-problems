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

bool toy_problems_cpp::isPowerOf4(int value) {
    if (value % 4 != 0) {
        return false;
    } else if (value / 4 == 1) {
        return true;
    }
    
    return toy_problems_cpp::isPowerOf4(value / 4);
}