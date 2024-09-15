#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        int count = 0;

        int ref = a[0];

        for (int i = 1; i < n-1; i++)
        {
            if (ref<a[i])
            {
                ref = a[i];
                count++;
            }
            
        }
        cout<<count;
        
    }
    
    return 0;
}