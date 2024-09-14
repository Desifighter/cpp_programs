#include<iostream>
using namespace std;

int main()
{
    int n = -6;

    int i = 1;
    string binary = "";
    while(n!=0){
        if(n&10000000000000000000000000000000){
            binary = binary+'1' ;
        }
        else{
            binary = binary+'0' ;
        }
    
   n = n<<1;
    //cout<<i<<endl;i++;
    }
    while(binary.length()!=32)
    {
        binary=binary+'0';
    }
    
    cout<<binary ;
   
    return 0;
}
   