#include <iostream>
using namespace std;
template <class T>
class Test
{
    T data;

public:
    Test() {}
    Test(T data)
    {
        this->data = data;
    }
    void display();
};
template <class t>
void Test<t>::display()
{
    cout << "You entered " << data << endl;
}
// templates and function overloading at same time
float add(float x, float y)
{
    cout << "I am func(real)" << endl;
    return x + y;
}
// with templates
template <class T>
T add(T x, T y)
{
    cout << "I am func(template)" << endl;
    return x + y;
}
void check(double)
{
    cout << "I am double" << endl;
}
void check(float)
{
    cout << "I am float" << endl;
}
int main()
{
    // Test t1;error
    /*
    Test t2(2);
    It is not necessary to provide data type along passing
    the arguments but for better practice just do.
    */
    /*
    Test t2;
    t2 = <int>Test(2);
    error
    */
    Test<int> t2;
    t2 = Test(2);
    t2.display();
    // by default floating point number is double
    cout << add(1.2f, 2.5f) << endl; // in case of templates take care of this
    cout << add(1.2, 2.5) << endl;
    check(4.33);
    check(4.33f);
    return 0;
}
/*
    NOTE:
    In the cause of invoking doing function and templates
    overloading at the same time the exact match will be
    invoked and the real function will take high priority
    than template
*/