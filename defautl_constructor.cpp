#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;

public:
    simple(int a = 10, int b = 45)// this one is a default constructor
    {
        data1 = a;
        data2 = b;

    }
    void show(){
        cout << "the value of data1 and data2 is " << data1 << " and " << data2 << endl;
    }
};
int main()

{
    simple a,b;
    a.show();
    b = simple(45, 80);
    b.show();
}