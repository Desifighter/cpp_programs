#include<iostream>
using namespace std;

int main(){
         int n = 5;

         for (int i = 1; i <= n; i++)
         {

            for (int k = 1; k <= n-i; k++)
            {
                cout<<" ";
            }
            
            for (int j = i; j > 0; j--)
            {
                
                cout<<j;

            }
            for (int l = 2; l <= i ; l++)
            {
                cout<<l;
            }
            
            cout<<endl;
            
         }
         

    return 0;
}