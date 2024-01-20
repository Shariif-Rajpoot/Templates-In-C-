#include <iostream>
using namespace std;
template <typename T1, typename T2>
class Toggle
{
    T1 num1;
    T2 num2;

public:
    Toggle();
    Toggle(T1, T2);
    void sum();
    void subtract();
    void multiply();
    void divide();
};
template <class T1, class T2>
Toggle<T1, T2>::Toggle() { cout << "Toggle mode on" << endl; }
template <class T1, class T2>
Toggle<T1, T2>::Toggle(T1 x, T2 y) : num1(x), num2(y) {}
template <class T1, class T2>
void Toggle<T1, T2>::sum()
{
    cout << num1 << " + " << num2 << " => " << num1 + num2 << endl;
}
template <class T1, class T2>
void Toggle<T1, T2>::subtract()
{
    cout << num1 << " - " << num2 << " => " << num1 - num2 << endl;
}
template <class T1, class T2>
void Toggle<T1, T2>::multiply()
{
    cout << num1 << " * " << num2 << " => " << num1 * num2 << endl;
}
template <class T1, class T2>
void Toggle<T1, T2>::divide()
{
    if (num2 < 0 || num2 > 0)
        cout << num1 << " / " << num2 << " => " << num1 / num2 << endl;
    else
        cout << num1 << " / " << num2 << " => "
             << "INFINITY" << endl;
}
int main()
{
    Toggle t1(1, 2.2);
    t1.sum();
    Toggle<float, float> *t2;
    t2 = new Toggle<float, float>(2.2, 3.2);
    t2->subtract();
    Toggle<int, float> t3; // default constructor will be invoked
    t3 = Toggle<int, float>(2, 2.3);
    t3.multiply();
    Toggle<float, int> t4(2, 3);
    t4 = Toggle<float, int>(4.2, 2); // this will update the previous one
    t4.divide();
    Toggle<float, float> t5; // default constructor will be invoked
    t5 = Toggle(3.00f, 3.00f);
    t5.sum();
    return 0;
}