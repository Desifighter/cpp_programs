#include<iostream>
using namespace std;
int main()
{
    int a , b ;
    char exp;
    cin>>a>>exp>>b;

    switch (exp)
    {
    case '+':
        cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        break;
        case '-':
        cout<<a<<" - "<<b<<" = "<<a-b<<endl;
        break;
        case '*':
        cout<<a<<" * "<<b<<" = "<<a*b<<endl;
        break;
        case '/':
        cout<<a<<" / "<<b<<" = "<<a/b<<endl;
        break;
        case '%':
        cout<<a<<" % "<<b<<" = "<<a%b<<endl;
        break;
    
    default:
        break;
    } 
    return 0;
}