#include <iostream>
using namespace std;

int main() {

/*
1
2 3
4 5 6
7 8 9 10

*/

int n;
cin>>n;
int i=1;
int k=1;
while(i<=n)
{
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

