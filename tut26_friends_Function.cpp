#include <iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void printData()
    {
        cout << "the value of a and b is " << a << "+" << b << "i" << endl;
    }
    friend complex sumComplex(complex , complex );
};
// given below is not a member function of class complex but is allowed to anythings with the private data(members)
complex sumComplex(complex o1, complex o2)
{ //not in the scope of class since we cannot called it from  object of that class;
    // It has permission to access class private data;
    //Usually contain object as arguments
    //It can be declared in the private as well as public section of the class
    // It cannot access the member directly by their name and need object_name.member_name to access the member of the class
    complex c3;
    c3.a = o1.a + o2.a;
    c3.b = o1.b + o2.b;
    // c3.setData((o1.a + o2.a), (o1.b + o2.b));
    return c3;
}

int main()
{
    complex c1, c2, sum;
    c1.setData(2, 3);
    c2.setData(4, 2);
    c1.printData();
    c2.printData();
    sum = sumComplex(c1, c2);
    sum.printData();

    return 0;
}
