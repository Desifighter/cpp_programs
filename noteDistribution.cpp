#include<iostream>
using namespace std;
int main()
{
    int amount;
    cin>>amount;
int Hundread = 0, fifty = 0 , twenty = 0 , ten = 0 ,one = 0; 
int exp = 1;
while (amount!=0)
{
    switch (exp)
    {
    case 1:
        Hundread = amount/100;
        amount = amount - Hundread * 100;
        break;
    case 2:
        fifty = amount/50;
        amount = amount - fifty * 50;
        break;
    case 3:
        twenty = amount/20;
        amount = amount - twenty * 20;
        break;
    case 4:
        ten = amount/10;
        amount = amount - ten * 10;
        break;
    case 5:
        one = amount/1;
        amount = amount - one * 1;
        break;            
    default:
        break;
    }
    exp++;
}

cout<<"Hundread rupee notes = "<<Hundread<<endl<<"Fifty Rupee notes = "<<fifty<<endl<<"Twenty rupee notes = "<<twenty<<endl<<"Ten Rupee notes = "<<ten<<endl<<"One Rupee note = "<<one;

    return 0;
}