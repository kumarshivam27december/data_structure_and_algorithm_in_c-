#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a positive number "<<endl;
    cin>>n;
    bool isprime=1;
    if(n==0||n==1)
    {
       isprime=0;

    }
    else{
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
             isprime=0;   
            }
            
        }
    }

if(isprime==0)
{
    cout<<"Not a prime number";
}
else{
    cout<<"prime number";
}
}

