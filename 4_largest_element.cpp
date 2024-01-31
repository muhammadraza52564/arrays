// Find the largest element in an array and display it.
#include<iostream>
using namespace std;
int main()
{
    int x,larger;
    cout<<"Enter number of elements ";
    cin>>x;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cout<<"Enter a number ";
        cin>>arr[i];
    }
    larger = arr[0];
    for(int j=0; j<x; j++)
    {
        if(arr[j] > larger)
            larger = arr[j];
    }
    cout<<"Largest number = "<<larger;
}
