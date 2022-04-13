#include <iostream>
using namespace std;
class A{
    int a;
    public:
        A & setData(int a){
            this->a = a;
            return *this;
        }
        void getData(){
            cout << "the value of a is " << this->a<<endl;

        }
};

int main(){
    A a;
    a.setData(25);
    a.getData();
    a.setData(12).getData();
    return 0;
}
