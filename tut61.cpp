#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    int data;
    string c;
    ofstream hout("sample60.txt");
    cout<<"Enter Your name";
    string name;
    // cin>>name;
    cin>>data;
    getline(cin ,c);
    getline(cin,name);
    int i=0;
        cout<<name<<endl;
    // while (name[i]!='\0')
    // {
    //     cout<<name[i];
    //     i++;
    // }
    // cout<<endl;
    
   
   
    // hout<<name;
    // hout<<"\nknahias isdh dshdiids hds hds ";
    // hout.close();

    // ifstream hin;
    // hin.open("sample60.txt");
    // string str2;
    // getline(hin,str2);
    // cout<<str2<<endl;
    // system("PAUSE");


    


    return 0;

}