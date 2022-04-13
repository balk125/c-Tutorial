#include<iostream>
#include<map>
using namespace std;

int main(){

    map <string ,int> marksmap;
    marksmap["kanhaiya"]=51;
    marksmap["harry"]=111;
    marksmap["sohan"]=21;
    marksmap["Aman"]=21;
    marksmap.insert({{"shubham",787},{"hvh ",54}});
	marksmap.insert(pair<string,int>("suraj",111));














    // Creating iterator==========================================
    map <string, int>::iterator iter;
    for ( iter = marksmap.begin(); iter!= marksmap.end(); iter++)
    {
       cout<<(*iter).first <<" "<<(*iter).second<<endl;
    }
    


    return 0;

}