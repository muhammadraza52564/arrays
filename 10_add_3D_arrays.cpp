#include<iostream>
using namespace std;
int main()
{
    int row_1,colum_1,dim_1,row_2,colum_2,dim_2 ;
//Input data about arrays
    cout<<"Enter about first 3D array: ";
    cout<<"Enter number of rows in 1st array ";
    cin>>row_1;
    cout<<"Enter number of column in 1st array ";
    cin>>colum_1;
    cout<<"Enter about Third dimention ";
    cin>>dim_1;
    cout<<"Enter about Second 3D array: ";
//Input about 2nd array
    cout<<"Enter number of columns in 2nd array ";
    cin>>row_2;
    cout<<"Enter number of columns in 2nd array ";
    cin>>colum_2;
    cout<<"Enter about Third dimention ";
    cin>>dim_2;
//Declaring arrays
    int arr[row_1][colum_1][dim_1];
    int arr2[row_2][colum_2][dim_2];
    int sum[100][100][100];
//Input values of elements of First array
    for(int i=0; i<row_1; i++)
    {
        for(int j=0; j<colum_1; j++)
        {
            for(int k=0; k<dim_1; k++)
            {
                cout<<"Enter a number at index ["<<i<<"]["<<j<<"]["<<k<<"] ";
                cin>>arr[i][j][k];
            }
            cout<<endl;
        }
        cout<<endl;
    }
//Enter Values of elements of Second array
    for(int l=0; l<row_2; l++)
    {
        for(int m=0; m<colum_2; m++)
        {
            for(int n=0; n<dim_2; n++)
            {
                cout<<"Enter a value at index ["<<l<<"]["<<m<<"]["<<n<<"] ";
                cin>>arr2[l][m][n];
            }
            cout<<endl;
        }
    }
//checking greater number of elements
    int greater_row ,greater_colum, greater_3dim;
  //For Rows
    if(row_1>row_2)
        greater_row = row_1;
    else
        greater_row = row_2;
  //For Columns
    if(colum_1>colum_2)
        greater_colum = colum_1;
    else
        greater_colum = colum_2;
  //For Third Dimentiom
    if(dim_1>dim_2)
        greater_3dim = dim_1;
    else
        greater_3dim = dim_2;
//Performing sum of array values
    cout<<"Sum of 3D-Array Element is: ";
    for(int i=0; i<greater_row; i++)
        {
            cout<<"{";
            for(int j=0; j<greater_colum; j++)
            {
                cout<<"{";
                for(int k=0; k<greater_3dim; k++)
                {
                    sum[i][j][k] = arr[i][j][k] + arr2[i][j][k];
                    cout<<sum[i][j][k];
                }
                cout<<"}";
            }
            cout<<"}";
        }
        return 0;
}
