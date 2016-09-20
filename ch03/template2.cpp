#include <iostream>
using namespace std;

template <typename T>
class MyClass {
  private:
    T value;

  public:
    MyClass(T val) : value(val) {}

    template <typename X>
    void assign(const MyClass<X> &x) {
        value = x.getValue();
    }

    T getValue() const {
        return value;
    }
};

int main()
{
    MyClass<double> d(1.11);
    MyClass<int> i(2);

    cout << d.getValue() << endl;
    cout << i.getValue() << endl;

    d.assign(d);
    d.assign(i);
    
    cout << d.getValue() << endl;
    cout << i.getValue() << endl;

    return 0;
}
