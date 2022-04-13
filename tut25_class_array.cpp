#include<iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;

public:

    void setData(int x,int y){
        a = x;
        b = y;

    }
    void setDataSum(complex o1,complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printData(){
        cout << "the value of a and b is " << a << "+" << b << "i" << endl;

    }
};






int main(){

    complex c1, c2, c3;
    c1.setData(2, 3);
    c2.setData(4, 2);
    c1.printData();
    c2.printData();
    c3.setDataSum(c1, c2);
    c3.printData();

    return 0;

}
