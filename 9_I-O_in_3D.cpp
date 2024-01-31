//Input data and output in 3-Dimention's
#include<iostream>
using namespace std;
int main()
{
    //Input about arrays
    int x,y,z;
    //Where x,y and z are direction of arrays
    cout<<"Enter number of elements in x Direction ";
    cin>>x;
    cout<<"Enter number of elements in y Direction ";
    cin>>y;
    cout<<"Enter number of elements in z Direction ";
    cin>>z;
    //Declaring arras
    int arr[x][y][z];
    //Input values
    cout<<"Input values according to indexes: "<<endl;
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            for(int k=0; k<z; k++)
            {
                cout<<"Enter the value at index ["<<i<<"]["<<j<<"]["<<k<<"] ";
                cin>>arr[i][j][k];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    //Output values in sorted form
    cout<<"Formatted output ";
    for(int l=0; l<x; l++)
    {
        cout<<endl<<"{ ";
        for(int m=0; m<y; m++)
        {   cout<<"{";
            for(int n=0; n<z; n++)
            {
                cout<<arr[l][m][n]<<"  ";
            }
            cout<<"}"<<endl;
        }
        cout<<" }"<<endl;
    }
}
