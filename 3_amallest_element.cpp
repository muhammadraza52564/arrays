//Smallest among array elements
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter number of elements will in an array ";
    cin>>x;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cout<<"Enter a number ";
        cin>>arr[i];
    }
    int smallest=arr[0];
    for(int j=0; j<x;j++)
    {
        if(arr[j]<smallest)
            smallest = arr[j];
    }
    cout<<"Smallest among numbers = "<<smallest;
}
