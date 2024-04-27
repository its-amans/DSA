#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        Node* next=NULL;
        Node* prev=NULL;
    }
};
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getLength(Node* &head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void insertathead(Node* &head,int d){
    Node* temp=head;
    Node* newNode=new Node(d);
    newNode->next=temp;
    temp->prev=newNode;
    head=newNode;
}
// void insertatend(Node* &head,int d){
//     Node* newNode=new Node(d);
//     Node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     newNode->prev=temp;
//     temp->next=newNode;
// }
//Alternative
void insertattail(Node* &tail,int d){
    Node* newNode=new Node(d);
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}
void insertatpos(Node* &head,Node* &tail,int d,int pos){
    if(pos==1){
        insertathead(head,d);
        return;
    }

    Node* newNode=new Node(d);
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    newNode->prev=temp;
    newNode->next=temp->next;
    temp->next->prev=newNode;
    temp->next=newNode;

    if(temp->next==NULL){
        insertattail(tail,d);
        return;
    }
}
void deletefromhead(Node* &head){
    Node* temp=head;
    head=temp->next;
    temp->next->prev=NULL;
    delete temp;
}
void deletefromend(Node* &tail){
    Node* temp=tail;
    tail=temp->prev;
    temp->prev->next=NULL;
    delete temp;
}
void deletefrompos(Node* &tail,Node* &head,int pos){
      if(pos==1){
        deletefromhead(head);
        return;
    }

    Node* temp=head;
    Node* prev=NULL;
    int cnt=1;
    while(cnt<pos){
        prev=temp;
        temp=temp->next;
        cnt++;
    }
    prev->next=temp->next;
    temp->next=NULL;
    delete temp;

    if(temp->next==NULL){
        deletefromend(tail);
        return;
    }
}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    //cout<<getLength;

    insertathead(head,11);
    print(head);

    // insertatend(head,12);
    // print(head);

    insertathead(head,13);
    print(head);

    insertatpos(head,tail,15,2);
    print(head);

    insertattail(tail,20);
    print(head);

    deletefromhead(head);
    print(head);

    deletefromend(tail);
    print(head);

    deletefrompos(tail,head,2);
    print(head);
}