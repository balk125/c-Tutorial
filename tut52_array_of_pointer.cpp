#include <iostream>
using namespace std;
class shopItems
{
    int id;
    float price;

public:
   void setData(int ,float);
    void getData();

};

void shopItems:: setData(int i,float j){
    id = i;
    price = j;
    
}
void shopItems:: getData(){
    cout<<"Id of this items is "<<id<< endl;
    cout << "Price of this items is " << price << endl;
}


main()
{
    int size = 3;
    shopItems *ptr = new shopItems[3];
    // ptr[0].setData(12, 25.5);
    // ptr[0].getData();
    // ptr[1].setData(13, 2500);
    // ptr[1].getData();
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {   cout<<"enter id"<<endl;
        cin >> p;
        cout << "Enter the price" << endl;
        cin >> q;
        ptr[i].setData(p,q);
        // ptr->setData(p,q); //    This line along with  line below will do excatly same as the above line.
        // ptr++;
    
    }
    for (int i = 0; i < size; i++)
    { 
        //   ptr[i].getData();// This  line will work exactly same as the below two lines
        ptr->getData();
        ptr++;
    }
    

    return 0;

};