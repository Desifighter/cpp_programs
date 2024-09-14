#include<iostream>
using namespace std;
int powr(int a , int b){
    int temp = a;
    a = 1;
    for (int i = 1; i <= b; i++)
    {   
        a = temp * a;
    }
    return a;
}
int main()
{
    cout<<powr(2,3);
    return 0;
}