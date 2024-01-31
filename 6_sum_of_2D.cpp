//C++ Program to Add Two Matrirow_1st Using Multi-dimensional Arracolum_1sts
#include<iostream>
using namespace std;
int main()
{
    //Declaring variables and arrays
    int row_1st,colum_1st,row_2nd,colum_2nd;
    //Entering values of number of rows and columns
    //For 1st matrices
    cout<<"Enter number of rows in first matrices ";
    cin>>row_1st;
    cout<<"Enter number of columns of First matrices ";
    cin>>colum_1st;
    //For second matrix
    cout<<endl<<"Enter number of rows in Second matrices ";
    cin>>row_2nd;
    cout<<"Enter number of columns in Second matrices ";
    cin>>colum_2nd;
    int arr[row_1st][colum_1st], arr2[row_2nd][colum_2nd] , sum[100][100];
    //Entering values of 1st matrices
    for(int i=0; i<row_1st; i++)
    {
        for(int j=0; j<colum_1st; j++)
        {
            cout<<"Enter a value at index ["<<i<<"]"<<"["<<j<<"] ";
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    cout<<"Now enter values of second matrices: "<<endl;
    //Entering values of second matrices
    for(int m=0; m<row_2nd; m++)
    {
       for(int n=0; n<colum_2nd; n++)
       {
           cout<<"Enter a value at index ["<<m<<"]["<<n<<"] ";
           cin>>arr2[m][n];
       }
       cout<<endl;
    }
    //Checking greater number of rows and columns
    int greater_row , greater_colum;
    //For Rows
    if(row_1st > row_2nd)
        greater_row = row_1st;
    else
        greater_row = row_2nd;
    //For colum
    if(colum_1st > colum_2nd)
        greater_colum = colum_1st;
    else
        greater_colum = colum_2nd;
    //Performing sum of matrices
    cout<<"Sum of Matrices: "<<endl;
    for(int k=0; k<greater_row; k++)
    {
        for(int l=0; l<greater_colum; l++)
        {
            sum[k][l] = arr[k][l] + arr2[k][l];
            cout<<sum[k][l]<<"\t";
        }
        cout<<endl;
    }
}
