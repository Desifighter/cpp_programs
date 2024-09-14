#include<iostream>
using namespace std;
int main()
{
    uint64_t n = 1024;
    cout<<n<<endl;
    uint64_t binary = 0;
    uint64_t multi = 1;
    while (n!=0)
    {
        binary = binary + (n % 2)* multi;
        n = n / 2;
        multi = 10 * multi ;
    }
    cout<<binary;
    // int temp = 1;
    // temp = (temp==0)?1:0;
    // cout<<temp;
    return 0;
}
