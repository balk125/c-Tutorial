#include <iostream>
using namespace std;

namespace myNameSpace
{   
    using namespace std;

    int a;
    int b;
    int sum();

    class employee
    {
    private:
        int salary;

    public:
        employee(int salary);
        void displaySalary();
        ~employee();
    };

}

int myNameSpace::sum()
{
    return a + b;
}
myNameSpace::employee::employee(int salary)
{
    this->salary = salary;
}

void myNameSpace::employee::displaySalary()
{
    cout << salary << endl;
}

myNameSpace::employee::~employee()
{
}

int main()
{
    myNameSpace::a = 45;
    myNameSpace::b = 5;
    // cout << myNameSpace::sum() << endl;
    myNameSpace::employee e1(1450);
    e1.displaySalary();

    return 0;
}