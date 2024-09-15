#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];

    int maxNo = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        maxNo = max(arr[i],maxNo);
        
    }

    cout<<"Max = "<<maxNo<<endl;
    return 0;
}