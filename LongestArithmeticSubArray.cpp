#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter testcases "<<endl;
    int t;
    cin>>t;
    while (t--)
    {
        cout<<"\nEnter size of an Array = \n";
        int n ;
        cin>>n;
        cout<<"\nEnter elements = \n";
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        int longArithmetic = 0;
        for (int i = 0; i < n - 3; i++)
        {
            for (int j = i + 2; j < n; j++)
            {
                int count = 0;
                for (int k = 0; k < (j - 1 -i); k++)
                {
                    if (a[i+k]-a[i+1+k] == a[i+1+k]-a[i+2+k])
                    {
                        count++;
                    }
                    
                }
                if (longArithmetic<count)
                {
                    longArithmetic = count;
                }
            } 
        }
        
        if (longArithmetic>0)
        {
            longArithmetic = longArithmetic + 2;
        }
        
        cout<<"\nLongest Arithmetic SubArraylength = "<<longArithmetic<<endl;
        
        
    }
    
    return 0;
}