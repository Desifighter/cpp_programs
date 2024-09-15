#include<iostream>
using namespace std;
int main()
{
    int a[50];
    
    int size = 5;

    // for inserting element
    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }

    int pos = 3;

    for (int i = size-1; i>=pos-1; i--)
    {
        a[i+1] = a[i];
    }
    
    a[pos-1] = 34;
    size++;
    // for printing
    for (int i = 0; i < size; i++)
    {
       cout<<a[i]<<" ";
    }
    
    return 0;
}