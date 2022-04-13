#include<iostream>
#include<fstream>
using namespace std;
/*
The usefull classes in c++ for  working with file input output are:


h

1. fstreambase
2. ifstream-----> derived from the fstreambase

3. ofstream-----> it is also derived from the base class fstreambase


In order to work with files in c++, you will have to open it. there are two ways to open a file:
1. using the constructor
2. using the member function

*/
int main(){
    string str2;
    string str="Myself bal krishna kanhaiya studing in bca 3 at gaya collage gaya";
    // opening file  using constructor and writing in it


    ofstream out("sample60.txt");
    out<<str;
    ifstream in("sample60_b.txt");
    // in>>str2;
    getline(in,str2);
    cout<<str2<<endl;
    getline(in,str2);
    cout<<str2;



    return 0;

}