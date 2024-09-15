#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],key = 8 ,ind = -1;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if (key == a[i])
        {
            ind = i;
        }
        
    }
    cout<<ind;
    

    return 0;
}