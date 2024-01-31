//program to find sum of elements of array;
#include<iostream>
using namespace std;
int main()
{

    int x,sum=0;
    cout<<"Enter number of elements u want to sum ";
    cin>>x;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cout<<"Enter a number ";
        cin>>arr[i];
    }
    for(int j=0; j<x; j++)
    {
        cout<<"Number at index "<<j<<" = "<<arr[j]<<endl;
    }
    for(int k=0; k<x; k++)
    {
        sum = sum+arr[k];
    }
    cout<<"Sum of numbers = "<<sum;

}
