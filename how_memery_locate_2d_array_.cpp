#include<iostream>
using namespace std;
int main()
{
    int a[3][2];
    for (int i = 0; i < 2; i++)
    {
       cout<<(&(a[1][i]))<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 2; i++)
    {
       cout<<(&(a[2][i]))<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 2; i++)
    {
       cout<<(&(a[3][i]))<<" ";
    }
    
    return 0;
}