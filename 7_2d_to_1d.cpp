//Convert 2D array into 1D array
#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter number of rows ";
    cin>>x;
    cout<<"Enter number of columns ";
    cin>>y;
    z= x*y;
    int arr[x][y],arr1D[z];
    //Taking input values
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            cout<<"Enter value at index at ["<<i<<"]["<<j<<"] ";
            cin>>arr[i][j];
        }
    }
    //Giving output as 2-Dimentional array
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
            cout<<arr[i][j]<<"\t";
        cout<<endl;
    }
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            arr1D[i*z+j] = arr[i][j];
        }
    }
    //Output in 1 Dimention Array
    cout<<"After converting into 1D array: "<<endl;
    for(int m=0; m<z; m++)
        cout<<arr1D[m]<<endl;
}
