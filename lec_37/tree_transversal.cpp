#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

// here just like int ,Node* is used to create a function which reflects a node data.
Node* newnode(int data){

// just like int Node * is used  to craete a variable which can hold a pointer data.

// My opinion -> struct node* is same as node*.
// node* and Node* is same thing.
    Node *temp=new Node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;

}

void preorder(struct Node* node){

    // Base case
    if(node==NULL){
        return;
    }

    cout<<node->data<<" ";

    // Recursive call
    preorder(node->left);

    preorder(node->right);

}

void postorder(struct Node* node){

    // Base case
    if(node==NULL){
        return;
    }

    // REcursive call
    postorder(node->left);

    postorder(node->right);

    cout<<node->data<<" ";
    
}

void inorder(struct Node* node){

    // Base case
    if(node==NULL){
        return;
    }

    // Recursive call
    inorder(node->left);

    cout<<node->data<<" ";

    inorder(node->right);
    
}

int main(){
    struct Node* root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->left->left=newnode(4);
    root->left->right=newnode(5);

    cout<<"Tree transversal for inorder is :";
    inorder(root);

    cout<<endl<<"Tree transversal for preorder is :";
    preorder(root);

    cout<<endl<<"Tree transversal for postorder is :";
    postorder(root);

    return 0;
}