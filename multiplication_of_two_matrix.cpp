#include<iostream>
using namespace std;
void printMatrix(int a,int row, int col){
      
}
int main()
{
    int row1,col1,row2,col2;
    cout<<"Enter row of matrix 1"<<endl;
    cin>>row1;
    cout<<"Enter col of matrix 1"<<endl;
    cin>>col1;

    int a[row1][col1],b[row2][col2],c[row1][col2];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin>>a[i][j];
        }
        
    }
    
    return 0;
}