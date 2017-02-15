#include <iostream>
#include <functional>
#include <memory>
#include <future>

void func(int x, int y) {
    std::cout << "func: " << x << " " << y << std::endl;
}

auto l = [](int x, int y) {
    std::cout << "lambda: " << x << " " << y << std::endl;
};

class C {
  public:
    void operator()(int x, int y) const {
        std::cout << "operator: " << x << " " << y << std::endl;
    }

    void memfunc(int x, int y) const {
        std::cout << "memfunc: " << x << " " << y << std::endl;
    }
};

int main()
{
    C c;
    std::shared_ptr<C> sp(new C);

    // bind()
    std::bind(func, 77, 33)();  // func(77, 33)
    std::bind(l, 77, 33)();     // l(77, 33)
    std::bind(C(), 77, 33)();   // C::operator()(77, 33)
    std::bind(&C::memfunc, c, 77, 33)();   // c.memfunc(77, 33)
    std::bind(&C::memfunc, sp, 77, 33)();  // sp->memfunc(77, 33)

    // async()
    std::async(func, 42, 77);  // func(42, 77)
    std::async(l, 42, 77);     // l(42, 77)
    std::async(c, 42, 77);     // c.operator()(42, 77)
    std::async(&C::memfunc, &c, 42, 77);  // c.memfunc(42, 77)
    std::async(&C::memfunc, sp, 42, 77);  // sp->memfunc(42, 77)

    return 0;
}

