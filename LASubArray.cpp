#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    
    int a[n];
    cout<<"\nEnter array elements\n";
    
    for(int i = 0;i<n;i++){
    cin>>a[i];
    }
    
    int la = 0 , count = 0;
   
    for(int i = 0; i<n-2 ;i++){
    
        if(a[i]-a[i+1]==a[i+1]-a[i+2]){
         count++;;
        }
        else if(count>0){
         la = count;
        count = 0;
    }
    }
    
    if(count>0){
         la = count;
        count = 0;
    }
    la= (la==0)?(count):(la+2);
    cout<<la;
    return 0;
}