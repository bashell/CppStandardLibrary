#ifndef ALGOSTUFF_HPP
#define ALGOSTUFF_HPP

#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <functional>

template <typename T>
inline void INSERT_ELEMENTS(T &coll, int first, int last) {
    for(int i = first; i <= last; ++i) {
        coll.insert(coll.end(), i);
    }
}

template <typename T>
inline void PRINT_ELEMENTS(const T &coll, const std::string &optcstr="") {
    std::cout << optcstr;
    for(auto elem : coll) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

template <typename T>
inline void PRINT_MAPPED_ELEMENTS(const T &coll, const std::string &optcstr="") {
    std::cout << optcstr;
    for(auto elem : coll) {
        std::cout << '[' << elem.first << ',' << elem.second << "] ";
    }
    std::cout << std::endl;
}

#endif  /* ALGOSTUFF_HPP */

