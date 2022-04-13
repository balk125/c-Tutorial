#include <iostream>
using namespace std;
class complex;
    



class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(complex o1, complex o2);
    
};

class complex
{   
    // friend class calculator;
    friend int calculator::sumRealComplex(complex o1, complex o2);

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
    
};

int calculator:: sumRealComplex(complex o1, complex o2){
        return (o1.a + o2.a);
    }
int main()
{
    complex c1, c2, sum;
    c1.setData(2, 3);
    c2.setData(4, 2);
    c1.printData();
    c2.printData();
    calculator c3;
    cout<<c3.sumRealComplex(c1, c2)<<endl;
   

    return 0;
}
