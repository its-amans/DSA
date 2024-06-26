//Singly linked list insertion & deletion &traversing.

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

//Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
    void insertAtHead(Node* &head,int d){
        Node* temp=new Node(d);
        temp->next=head;
        head=temp;
    }
    void insertatend(Node* &tail,int d){
        Node* endNode=new Node(d);
        tail->next=endNode;
        tail=endNode;
    }
    void insertatpos(Node* &tail,Node* &head,int d,int pos){

    //For insertion at head
        if(pos==1){
            insertAtHead(head,d);
            return;
        }
    
        Node* newNode=new Node(d);
        Node* temp=head;
        int cnt=1;
        while(cnt<pos-1){
            temp=temp->next;
            cnt++;
        }
        newNode->next=temp->next;
        temp->next=newNode;

    //For insertion at tail
        if(temp->next==NULL){
            insertatend(tail,d);
            return;
        }
}

    void deletefrombeg(Node* &head){
        Node* temp=head;
        head=temp->next;
        temp->next=NULL;  //This is an unwanted linewhich we have written just to ensure errors.
        //WE dont want that if any node is deleting then it points to any node which is existing.
        delete temp;
    }
    void deletefromend(Node* &head,Node* &tail){
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;//This is an unwanted linewhich we have written just to ensure errors.
        //WE dont want that if any node is deleting then it points to any node which is existing.
        delete temp->next;
    }
    void deleteatpos(Node* &head,int pos){
        Node* temp=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<=pos-1){
            prev=temp;
            temp=temp->next;
            cnt++;
        }
        prev->next=temp->next;
        temp->next=NULL;//This is an unwanted linewhich we have written just to ensure errors.
        //WE dont want that if any node is deleting then it points to any node which is existing.
        delete temp;
    }

    void display(Node* &head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
int main(){
    Node* node1=new Node(10);
    Node* head=node1;       //head pointer is fixed at head

    //Insert at head
    // display(head); // Call the display function using the head pointer.
    // insertAtHead(head,11); // Call the insertAtNode function using the head pointer.
    // display(head); // Call the display function again to show the updated linked list.
    // insertAtHead(head,12);
    // display(head);

    //Insert at tail
    Node* tail=node1; //Actually we have taken atail pointer which moves forward withe each insertion call
    display(head);
    insertatend(tail,11);
    display(head);
    insertatend(tail,12);
    display(head);
    insertatend(tail,13);
    display(head);

    //insert at pos
    insertatpos(tail,head,15,3);
    display(head);

    //delete from beg
    deletefrombeg(head);
    display(head);

    //delete from end
    deletefromend(head,tail);
    display(head);

    //delete from position
    deleteatpos(head,2);
    display(head);
}

