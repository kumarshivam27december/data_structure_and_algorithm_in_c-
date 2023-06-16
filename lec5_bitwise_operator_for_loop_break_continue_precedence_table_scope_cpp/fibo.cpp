#include <iostream>
using namespace std;int main(){int n;cin>>n;long long int a=0;long long int b=1;cout<<a<<" "<<b<<" ";int i=1;while(i<=n){long long int c=a+b;	a=b;b=c;cout<<c<<" ";i++;}}
