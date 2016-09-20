#include <iostream>
#include <bitset>

/**
 * non-template重载函数print(), 用于结束递归
 */
void print() {

}

/**
 * variadic template
 */
template <typename T, typename... Types>
void print(const T& firstArg, const Types&... args) {
    std::cout << firstArg << std::endl;
    print(args...);
}

int main()
{
    print(7.5, "hello", std::bitset<16>(377), 42);

    return 0;
}
