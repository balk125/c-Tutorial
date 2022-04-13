#include<iostream>
//Class templetes with multiple templetes

using namespace std;
template <class t1,class t2>
class Myclass{

    t2 data2;
    t1 data1;
    public:
    Myclass(t1 a,t2 b){
        this->data1=a;
        this->data2=b;


    }

    void display(){
        cout<<this->data1<<endl<<this->data2<<endl;

    }
};


int main(){
    Myclass <int, float>c1(15,450.5);
    c1.display();
    Myclass <int ,int>c2(12,15);
    c2.display();

    return 0;

}