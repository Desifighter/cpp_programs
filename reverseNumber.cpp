#include<iostream>
#include <bits/stdc++.h>
#include<cmath>
using namespace std;
// int mypow(int num1 ,int num2){
//     int res = 1;
//     for (int i = 1; i <= num2; i++)
//     {
//         res = res * num1;
//     }
    
//     return res;
// }
int main()
{
    int number = 425;
    int temp = number;
    int count = 0;
    while (temp != 0)
    {
        count++;
        temp = temp/10;
    }
    
    cout<<"count = "<<count<<endl;
    temp = number ;
    int rnum = 0 , snum = 0;

    for (int i = 1; i <= count; i++)
    {
        snum = temp % 10;
        temp = temp / 10;
        //rnum = rnum + snum * mypow(10,count-i);
        rnum = rnum*10 + snum;

        cout<<"snum = "<<snum<<" temp = "<<temp<<" rnum = "<<rnum<<endl;
    }

    cout<<rnum;
    

    
    
    return 0;
}