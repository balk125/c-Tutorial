
// Function object(Functors)
#include <iostream>
#include <functional>
#include<algorithm>
using namespace std;
int main()
{

    int arr[] = {12, 84, 74, 5, 70, 51, 25, 985};
    sort(arr,arr+8);
    sort(arr,arr+8,greater<int>());

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}