//Calculate and display the average of elements in an array.
#include<iostream>
using namespace std;
int main()
{
    int x,sum=0;
    float avg=0.00;
    cout<<"Enter number of elements you want to find avg ";
    cin>>x;
    int arr[x];
    //To input values
    for(int i=0; i<x; i++)
    {
        cout<<"Enter a number ";
        cin>>arr[i];
    }
    //To find sum
    for(int j=0; j<x; j++)
    {
        sum = sum+arr[j];
    }
    cout<<"Sum of numbers = "<<sum<<endl;
    avg = sum/x;
    cout<<"Average of numbers = "<<avg;
}
