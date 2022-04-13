#include <iostream>
using namespace std;
template <class T1, class T2>
float returnAverage(T1 a, T2 b)
{
    float avg;
    avg = (a + b) / 2.0;
    // cout<<"the average is "<<avg<<endl;;
    return avg;
}

// Function templetes used in swapping function==========

template <class t>
void Swap(t &x, t &y)
{
    t temp = x;
    x = y;
    y = temp;
}

int main()
{
    float p;
    p = returnAverage(5.4, 6.5);
    cout << "The average of these number is : " << p << endl;
    printf("The average is %.2f\n", p);

    // driver code of swap function
    int a = 5;
    int b = 7;
    cout << "before swapping"<<endl;;
    cout << a << endl
         << b << endl;
    Swap(a, b);
    cout << "After swapping"<<endl;;
    cout << a << endl
         << b << endl;

    return 0;
}