#include <iostream>
using namespace std;

int main() {

/*

1
2 3
3 4 5 
4 5 6 7

*/

int n;
cin>>n;
int i=1;
while(i<=n)
{
    int k=i;
    int j=1;
    while(j<=i)
    {
        cout<<k<<" ";
        k++;
        j++;
    }
    cout<<endl;
    i++;
}

}
