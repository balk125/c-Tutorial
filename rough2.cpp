#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
string strings[2];


int len(string str)  
{  
    int length = 0;  
    for (int i = 0; str[i] != '\0'; i++)  
    {  
        length++;  
          
    }  
    return length;     
} 
  
// create custom split() function  
void split (string str, char seperator)  
{  
    int currIndex = 0, i = 0;  
    int startIndex = 0, endIndex = 0;  
    while (i <= len(str))  
    {  
        if (str[i] == seperator || i == len(str))  
        {  
            endIndex = i;  
            string subStr = "";  
            subStr.append(str, startIndex, endIndex - startIndex);  
            strings[currIndex] = subStr;  
            currIndex += 1;  
            startIndex = endIndex + 1;  
        }  
        i++;  
        }     
}  
  


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin>>n;
    string str[2];
    map <string,int> data[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>str[i];
        }
         char seperator = ' ';
         split(str[i], seperator); 
         data[i].insert({strings[0],strings[1]});
            //  marksmap.insert({{"shubham",787},{"hvh ",54}});

               
    }
    
    return 0;
}