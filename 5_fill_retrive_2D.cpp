//To fill and retrive 2d arra
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter number of rows ";
    cin>>x;
    cout<<"Enter number of columns ";
    cin>>y;
    int arr[x][y];
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            cout<<"Enter a value ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    for(int m=0; m<x; m++)
    {
        for(int n=0; n<y; n++)
            cout<<"Number at index ["<<m<<"]["<<n<<"] is "<<arr[m][n]<<endl;
    }

}
