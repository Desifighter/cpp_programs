#include <bits/stdc++.h>
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int min = permutation.size() + 1;
    int minindex = -1;
    int i = -1;
    int j = permutation.size() - 1;

    while (j > 0)
    {

        if (min > permutation[j])
        {
            min = permutation[j];
            minindex = j;
        }

        if (permutation[j - 1] < min)
        {
            i = j - 1;
            break;
        }
        j--;
    }
    if (i != -1)
    {
        permutation.erase(permutation.begin() + minindex);
        permutation.insert(permutation.begin() + i, min);
        sort(permutation.begin() + (i + 1), permutation.begin() + permutation.size() - 1);
    }
    else
    {
        sort(permutation.begin(), permutation.end());
    }
    return permutation;
}

int main(){
    int testcase;
    cin>>testcase;

    while (testcase--)
    {
        int size;
        cin>>size;
        vector<int> arr;
        for (int i = 0; i < size; i++)
        {
            int temp;
            cin>>temp;
            arr.emplace_back(temp);
        }
        arr = nextPermutation(arr,size);

        // cout<<arr;
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        



    }
    
}