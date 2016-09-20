#include <iostream>

int main()
{
    int x = 0, y = 42;
    auto qqq = [x, &y] {
                std::cout << "x: " << x << std::endl;
                std::cout << "y: " << y << std::endl;
                ++y;
            };

    x = y = 77;
    qqq();
    qqq();
    std::cout << "final y: " << y << std::endl;

    return 0;
}
