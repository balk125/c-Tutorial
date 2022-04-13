#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{

    ofstream hout;
    hout.open("sample60.txt");
    cout << "Enter Your name : ";
    string name;
    // cin>>name;
    getline(cin, name);

    // cout << name << endl;


    hout << name;
    hout << "\nI am studing in bca 1st";
    hout << "\nthese are the rules of c++";
    hout << "\ndont read python before c or c++ ";
    hout << "\nthis is me";
    hout.close();

    ifstream hin;
    hin.open("sample60.txt");
    string str2;
    while (hin.eof() == 0)
    {
        getline(hin, str2);
        cout << str2 << endl;
    }
    hin.close();

    system("PAUSE");

    return 0;
}


