// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// int main()
// {
    
//     int arr[] = {16,17,4,3,5,2} ;int n = 6;

//     vector<int> v;

//     int sum = -1;

//     for (int i = n-1; i >=0 ; i--) {
//             if (arr[i]>=sum) {
//                 v.push_back(arr[i]);
//                 sum = arr[i];
//             }
//         }
//     reverse(v.begin(),v.end());

//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{int p = 0;
    long n = 3895535562;
    string bin = "";
    while (n!=0)
    {
        int value = n&1;
        n = n>>1;
        
        bin = (char)(value+48)+bin;
        cout<<p<<endl;p++;

    }
    cout<<bin;
    
    return 0;
}