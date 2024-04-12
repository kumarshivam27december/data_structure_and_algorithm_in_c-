#include <bits/stdc++.h>
using namespace std;
bool checkhappiness(int n){
    //
    if(n==1||n==7) return true;
    int sum = n;
    int x = n;
    while(sum>9){
        sum = 0;
        while(x>0){
            int d = x%10;
            sum+=d*d;
            x/=10;
        }
        if(sum==1)
            return true;
        x=sum;
       
    }
    if(sum==7)
        return true;
    return false; 
    
}
int main()
{
    int n;cin>>n;
    if(checkhappiness(n)){
        cout<<"the number is happy number"<<endl;
    }else{
        cout<<"the number is not happy number"<<endl;
    }
    return 0;
}