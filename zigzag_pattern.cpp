#include<iostream>
using namespace std;
int main()
{
    int row = 3 ,col = 31;
    
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            // if( ((i==1 || i==3)&& (i+j)%4 == 0)||(i==2 && (i+j)%2 == 0) )
            // {
            //     cout<<"*";
            // }
            // else
            //     cout<<" ";

            if (((i+j)%4 == 0)||(i==2 && j%4 == 0))
            {
                cout<<"*";
            }
            else
                cout<<" ";
            
            
        }
        cout<<endl;
        
    }
    
    return 0;
}