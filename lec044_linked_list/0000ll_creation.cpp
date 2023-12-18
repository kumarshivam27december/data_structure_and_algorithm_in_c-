#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        this->data=val;
        this->next=NULL;
    }
};
void print(node* &head){
    node* temp = head;
    while (temp->next!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;

    }cout<<endl;
    
}
void insertathead(node* &head,int data){
    node* temp = new node(data);
    temp->next = head;
    head = temp;

}
void insertattail(node* &tail,int data){
    node* temp = new node(data);
    
}
int main(){
    node* node1 = new node(10);
    cout<<node1->data<<" ";
    node* head = node1;
    insertathead(head,20);
    print(head);
    return 0;
}