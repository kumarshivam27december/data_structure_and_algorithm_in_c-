#include <bits/stdc++.h>
using namespace std;
int singles(int n,vector<int>&arr){
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
    
}
int main()
{
    int n = 13;
    vector<int> arr = {1 ,2, 3, 5, 3, 2, 1, 4, 5, 6, 6, 4, 4};
    cout<<singles(n,arr);
    cout<<endl;
    return 0;
}