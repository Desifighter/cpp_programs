#include<iostream>
using namespace std;
int main()
{
    int money = 100;
    int chocolate = money;
    int wrapper = money;
    while (money!=0)
    {
        money = wrapper / 3;
        chocolate = chocolate + money;
        wrapper = (wrapper % 3) + money;
    }
    cout<<chocolate;
    return 0;
}