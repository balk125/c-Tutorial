#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float>
class harry
{
public:
    T1 a;
    T2 b;
    harry(T1 x , T2 y){
        a=x;
        b=y;

    }
    void display(){
        cout<<"The value of a is :"<<a<<endl;
        cout<<"The value of b is :"<<b<<endl;

    }

};

int main()
{
    harry <> h1(12,45.5);
    h1.display();
    harry<char ,char> h2('p','c');
    h2.display();
    harry<float ,char> h3(459.256,'c');
    h3.display();

    return 0;
}