#include <bits/stdc++.h>
using namespace std;
int numSquareSum(int n){
    int squaresum = 0;
    while(n){
        int digit = n%10;
        squaresum+=(digit*digit);
        n/=10;
    }
    return squaresum;
}
bool checkhappiness(int n){
    set<int> st;
    while(1){
        n =numSquareSum(n);
        if(n==1) return true;
        if(st.find(n)!=st.end()) return false;
        st.insert(n); 
    }

    /*
    //way 1
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


    */
    
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