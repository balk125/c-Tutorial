#include <iostream>
using namespace std;

template <class T1>
class harry
{
public:
    T1 a;

    harry(T1 x)
    {
        a = x;
    }
    void display();
};

template <class T1>
void harry <T1>::display()
{
    cout << "The value of a is :" << a << endl;
}
int main()
{
    harry<int> h1(45);
    h1.display();

    harry<string> h2("kanhaiya is a bca student");
    h2.display();

    return 0;
}