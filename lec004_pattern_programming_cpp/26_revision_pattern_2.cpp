/*


      *
    * *
  * * *
* * * *  



*/
#include <iostream>
using namespace std;
int main()
{
    int  n = 4;
    int i=1;
    while(i<=n)
    {
        int space = n-i+1;
        while(space)
        {
            cout<<" "<<" ";
            space--;
        }
        int j = 1;
        while(j<=i)
        {
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}