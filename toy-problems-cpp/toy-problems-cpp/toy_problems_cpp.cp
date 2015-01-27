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
