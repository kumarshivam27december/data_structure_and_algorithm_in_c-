#include <iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

node* insertbst(node* root,int val){
    if (root==NULL)
    {
        return new node(val);
    }

    if(root->data > val){
        root->left = insertbst(root->left,val);
    }else{
        root->right = insertbst(root->right,val);
    }
    
    return root;
}
void inorder(node* root){

    if (root==NULL)
    {
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    
}
node* inordersuccessor(node* root){
    node* curr = root;
    while (curr && curr-> left!=NULL)
    {
        curr = curr->left;
    }
    return curr;
}

node* deleteinbst(node* root,int key){
    if ( key < root->data)
    {
       root->left =  deleteinbst(root->left,key);
    }
    else if (key > root->data)
    {
        root->right = deleteinbst(root->right,key);
    }
    else if (key == root->data)
    {
        
    }
    
    
    
}
int main()
{
    node* root  = NULL;
    
    root  = insertbst(root,5);
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        insertbst(root,arr[i]);
    }

    inorder(root);
    cout<<endl;
    return 0;
}