/*

1 1 1 1
  2 2 2
    3 3
      4


*/
#include <iostream>
using namespace std;
int main()
{
    int n=4;
    int i=1;
    while(i<=n)
    {
        int space = i-1;
        while(space)
        {
            cout<<" "<<" ";
            space--;
        }

        int j=1;
        while(j<=n-i+1)
        {
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
