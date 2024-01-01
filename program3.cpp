#include <iostream>
using namespace std;
// template <class T1, class T2, class T3>
template <class T1 = int, class T2 = float, class T3 = char>
class Test
{
    T1 data1;
    T2 data2;
    T3 data3;

public:
    Test(T1 a, T2 b, T3 c)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    Test() {}
    void display()
    {
        cout << endl;
        cout << "The data 1 is " << data1 << endl;
        cout << "The data 2 is " << data2 << endl;
        cout << "The data 3 is " << data3 << endl;
    }
};

int main()
{
    Test<int, int, int> t1;
    t1 = Test(2, 2, 2);
    t1.display();
    Test<float, float, float> t2;
    t2 = Test(2.2f, 3.2f, 32.3f);
    t2.display();
    /*
    t2 = Test(2.2, 3.2, 32.3);
    by default the floating point number is double type so make it float then pass it
    as an argument.
    */
    Test<float, int, char> t3;
    t3 = Test<float, int, char>(2.3, 3, 'c');
    t3.display();

    /*
    Test<char, int, char> t4(2, 'i', 2);
        this will n't throw an error but we can't achieve the desire output.
    */
    Test<char, int, char> t4('2', 2, '2');
    t4.display();
    // int &y;must give initializer to reference variable otherwise error.
    // char s = "2"; error
    // string st = 's';error
    // according to default data types
    Test<> t5(2, 3.3, 'c');
    t5.display();
    return 0;
}