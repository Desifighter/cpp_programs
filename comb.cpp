#include<iostream>
using namespace std;
int main()
{
    int n = 3;
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 717; j++)
        {
            /* code */
            cout<<"*";
        }
        cout<<"\n";
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if (j % 2 == 0)
            {
                /* code */
                cout<<"*";
            }
            else
            {
                
                cout<<"    ";
            }
            
            
        }
        cout<<endl;
    }
    
    return 0;
}