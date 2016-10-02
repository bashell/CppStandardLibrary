#ifndef ICSTRING_HPP
#define ICSTRING_HPP

#include <iostream>
#include <string>
#include <cctype>

struct ignorecase_traits : public std::char_traits<char> {
    static bool eq(const char &c1, const char &c2) {
        return std::toupper(c1) == std::toupper(c2);
    }
    
    static bool lt(const char &c1, const char &c2) {
        return std::toupper(c1) < std::toupper(c2);
    }

    static int compare(const char *s1, const char *s2, std::size_t n) {
        for(std::size_t i = 0; i < n; ++i) {
            if(!eq(s1[i], s2[i])) {
                return lt(s1[i], s2[i]) ? -1 : 1;
            }
        }
        return 0;
    }

    static const char *find(const char *s, std::size_t n, const char &c) {
        for(std::size_t i = 0; i < n; ++i) {
            if(eq(s[i], c)) {
                return &(s[i]);
            }
        }
        return 0;
    }
};

typedef std::basic_string<char, ignorecase_traits> icstring;

inline std::ostream& operator<<(std::ostream &strm, const icstring &s) {
    return strm << std::string(s.data(), s.length());
}

#endif  /* ICSTRING_HPP */
