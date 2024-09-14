#include<iostream>
using namespace std;
int main()
{
    int n = 1111;
    int decimal = 0;
    int multi = 1;

    while (n != 0)
    {
        /* code */
        decimal = decimal + (n % 10)*multi;
        multi = multi * 2;
        n = n / 10;
    }
    cout<<decimal;
    return 0;
}