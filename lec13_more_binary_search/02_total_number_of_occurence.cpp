#include <iostream>
using namespace std;
int FirstOccurence(int arr[],int n, int x)
{
    int s=0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e)
    {
        
    }
}
int LastOccurence(int arr[],int n,int x)
{

}
int main()
{
    int arr[9]={1,2,2,2,2,3,4,5,9};
    int index = 2;
    int count1 = FirstOccurence(arr,9,index);
    int count2 = LastOccurence(arr,9,index);
    cout << count2-count1+1 <<endl;
    return 0;    
} 
