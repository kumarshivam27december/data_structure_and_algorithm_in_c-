#include <iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0] = -1;
        size=0;
    }

    void insert(int value){
        size++;
        int index = size;
        arr[index] = value;

        //compare
        while(index>1){
            int parent = index/2;
            if (arr[parent] < arr[index])
            {
               swap(arr[parent],arr[index]);
               index = parent;
            }
            else{
                return;
            }
            
        }

    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    void deletion(){
        if (size==0)
        {
            cout<<"nothing"<<endl;
            return;
        }

        //step 1
        arr[1] = arr[size];
        //step 2
        size--;
        //step 3
        //take root to the original position
        int i = 1;
        while (i<size)
        {
            int leftindex = 2*i;
            int rightindex = 2*i+1;

            if (leftindex < size && arr[i]<leftindex)
            {
               swap(arr[leftindex],arr[i]);
               i = leftindex;
            }
            else if (rightindex < size && arr[i]<rightindex)
            {
               swap(arr[rightindex],arr[i]);
               i = rightindex;
            } else{
                return;
            }           
        }
        


        
    }
};
int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deletion();
    h.print();
          return 0;
}