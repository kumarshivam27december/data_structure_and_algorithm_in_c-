#include <bits/stdc++.h>
using namespace std;
int totalCandy(vector<int> &v){
    if(v.size()==0) return 0;
    if(v.size()==1) return 1;
    int l = v.size();
    vector<int> k(l,1);
    int total = l;

    //code here
    
    return total;
}
int main(){
    vector <int> v = {1,0,2};
    cout<<totalCandy(v)<<endl;
    return 0;
}