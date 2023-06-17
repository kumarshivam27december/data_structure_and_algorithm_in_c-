#include <iostream>
using namespace std;
//in the arr[] below  you should never put a value 
void printArray(int arr[], int size)
{
    cout<<"printing the array"<<endl;
    // print the array
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
cout<<"printing done"<<endl;
}
int main()
{
    //declare
    // int number[15];

    //accessing an array
    // cout<<"value at 14 index "<<number[14]<<endl;


    //cout<<"value at 20 index "<<number[20]<<endl;
    

    //initialising an array
    int second[3]={5,7,11};


    //accessing an element
    // cout<<"value at 2 index "<<second[2]<<endl;
    printArray(second,3);
    int third[15]={2,7};

    // print the array

    
    cout<<"printing the array "<<endl;
    printArray(third,15);



cout<<endl;
int fourth[10]={0};


printArray(fourth,10);



//initialising all location with 1
cout<<endl;
int fifth[10]={1};
printArray(fifth,10);


// this method only will give the first value as 1 else everything as 0     







     cout<<"\nEverything is fine"<<endl;

}