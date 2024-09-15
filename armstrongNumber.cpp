#include<iostream>
using namespace std;
int mypow(int a , int b){
    int result = 1;
    for (int i = 1; i <= b; i++)
    {
        result = result * a;
    }
    return result;
}
int main()
{
    int n = 1;
    int temp = n , sum = 0 ,count = 0;
    while (temp != 0)
    {
        count++;
        temp/=10;
    }
    
    temp = n;

    while(temp != 0){
        int lastdigit = temp % 10;
        sum = sum + mypow(lastdigit,count);
        temp/=10; 
    }
    if (n == sum)
    {
        cout<<"Armstrong\n";
    }
    else
    {
        cout<<"Armstrong nahi hai\n";
    }
    
    return 0;
}