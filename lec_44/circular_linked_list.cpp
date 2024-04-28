#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        Node* next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with data"<<value<<endl;
    }
};
void insertnode(Node* &tail,int element ,int d){

    //empty list
    if(tail==NULL)
    {
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        Node* temp=tail;
       while(temp->data!=element){
            temp=temp->next;
       }
       Node* newNode=new Node(d);
       newNode->next=temp->next;
       temp->next=newNode;
    }
}
void print(Node* tail){
    Node* temp=tail;

    if(tail==NULL){
        cout<<"List is empty "<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}
void deletenode(Node* &tail,int value){
    if(tail==NULL){
        cout<<"List is empty !"<<endl;
        return;
    }
    else{
    Node* prev=tail;
    Node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        
//Updating tail pointer after delete when one node is there.
//Updation of tail pointer is important because it is passed as a parameter in the print function.
        if(curr==prev){
            tail==NULL;
        }
        //updating tail pointer whwn more than one node is there;
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    Node* tail=NULL;

    insertnode(tail,10,11);
    print(tail);

    // insertnode(tail,11,15);
    // print(tail);

    // insertnode(tail,15,12);
    // print(tail);
    
    // insertnode(tail,15,11);
    // print(tail);

    // deletenode(tail,11);
    // print(tail);

    // deletenode(tail,11);
    // print(tail);

    // deletenode(tail,15);
    // print(tail);

    // deletenode(tail,12);
    // print(tail);

    deletenode(tail,11);
    print(tail);
}
