#include <iostream>
using namespace std;
template <typename T>
void swapp(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
    /*
        In the case of templates const doesn't work
        const int s;
        s = 10; will n't thrown an error.
    */
}
template <typename T>
void display(const T x, T y)
{
    cout << "X => " << x << endl;
    cout << "Y => " << y << endl;
}
int main()
{
    int x = 2;
    int y = 3;
    cout << "Before swapping" << endl;
    display(x, y);
    swapp(x, y);
    cout << "After swapping" << endl;
    display(x, y);
    float x_ = 2.3343;
    float y_ = 3.3322;
    cout << "Before swapping" << endl;
    display(x_, y_);
    swapp(x, y);
    cout << "After swapping" << endl;
    display(x_, y_);
    return 0;
}
