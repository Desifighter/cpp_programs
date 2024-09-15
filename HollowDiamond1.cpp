#include<iostream>
using namespace std;
int main()
{
    int n = 50;

    for(int i = 1; i <=n ;i++){

        for (int j = 1; j <= n+1-i; j++)
        {
            cout<<"*";
        }

        for (int k = 1; k <= 2*i-1; k++)
        {
            cout<<" ";
        }

        for (int q = 1; q <= n+1-i; q++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i = n; i > 0  ;i--){

        for (int j = 1; j <= n+1-i; j++)
        {
            cout<<"*";
        }

        for (int k = 1; k <= 2*i-1; k++)
        {
            cout<<" ";
        }

        for (int q = 1; q <= n+1-i; q++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cin>>n;
    return 0;
}