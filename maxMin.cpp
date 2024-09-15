#include<iostream>
using namespace std;
int main()
{
    int size = 5;
    int a[size];
    int maxNo = INT32_MIN, minNo = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
        maxNo = max(maxNo,a[i]);
        minNo = min(minNo,a[i]);
        // if (a[i]>max)
        // {
        //     max = a[i];
        // }
        // if (a[i]<min)
        // {
        //     min = a[i];
        // }
    }
    
    cout<<"Max = "<<maxNo<<" Min = "<<minNo<<endl;
    
    return 0;
}