#include <iostream>
using namespace std;
/*
syntax to make template
    template <class T>
    template <typename T>
*/
template <class T>
class Vector
{
    T *array; // pointer in stack
    int size;

public:
    Vector()
    {
        size = 0;
        array = new T[size]; // assigning to the address of array in heap
    }
    void push_back(T a)
    {
        array[size] = a;
        size++;
    }
    void pop_out()
    {
        if (size >= 0)
            cout << "The number " << array[--size] << " is pop out" << endl;
    }
    void display()
    {
        cout << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "Value at index " << i + 1 << " is " << array[i] << endl;
        }
    }
    ~Vector()
    {
        delete[] array;
        array = nullptr;
    }
};

/*
void Vector::push_back(T)
{
    this will throw an error for some reason
    we can't define the member function outside the class.
}
*/
int main()
{
    // 1
    Vector<int> array1;
    array1.push_back(2);
    array1.push_back(21);
    array1.push_back(12);
    array1.push_back(2);
    array1.push_back(5);
    array1.display();
    array1.pop_out();
    array1.pop_out();
    array1.pop_out();
    array1.display();
    // 2
    Vector<float> array2;
    array2.push_back(2.2);
    array2.push_back(21.5);
    array2.push_back(12.5);
    array2.push_back(2.90);
    array2.push_back(5.5);
    array2.display();
    array2.pop_out();
    array2.display();
    return 0;
}