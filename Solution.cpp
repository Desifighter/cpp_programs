#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int>arr{1 ,2, 3, 1, 2, 3}; int n = 6; int K = 6;
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if(arr[i]+arr[j]+arr[k]==K){
                    cout<<"i = "<<i<<" j = "<<j<<" k = "<<k<<endl;
                    vector<int> jay{arr[i],arr[j],arr[k]};
                    ans.push_back(jay);
                    goto here;
    //                 if (std::count(ans.begin(), ans.end(), jay)) {
       
    // }
    // else {
    //     ans.push_back(jay); 
    // }
                    
                }
            }
            
        }
        
    }
    here:
    for (int i = 0; i < ans.size(); i++)
    {
        /* code */
        for (int j = 0; j < ans[i].size(); j++)
        {
            /* code */
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
        
    }



    
    
    return 0;
}