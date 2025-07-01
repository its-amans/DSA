// // Lec 54
// //stack implementation using array ----all operation is O(n);


// #include<iostream>
// using namespace std;
// class Stack{
//     public:
//         int *arr;
//         int size;
//         int top;

//     Stack(int size){
//         this->size=size;
//         arr=new int[size];
//         top=-1;
//     }
    
//     void push(int element){
//         //check stack is not full
//         if( size-top >1){
//             top++;
//             arr[top]=element;
//         }
//         else{
//             cout<<"Stack Overflow";
//         }
//     }
//     void pop(){
//         //check if empty
//         if(top>=0){
//             top--;
//         }
//         else{
//             cout<<"Stack Underflow"<<endl;
//         }
//     }
//     int peek(){
//         if(top>=0){
//             return arr[top];
//         }
//         else{
//             cout<<"Stack is Empty"<<endl;
//         }
//     }
//     bool isEmpty(){
//         if(top==-1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

// int main(){
//     Stack st(5);
//     st.push(11);
//     st.push(22);
//     st.push(13);
//     st.push(15);
//     st.push(3);

//     st.pop();
//     st.pop();
//     cout<<st.peek()<<endl;
//     cout<<endl<<"is Stack is Empty"<<st.isEmpty();
// }


//Stack Implementation using linked list

//follows the LIFO that the last added id to be removed first
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

Node* top =NULL;

//top -> 30 -> 20 -> 10, This is the scenario that insertion and the deletion both are from front end

void push(int element){
    Node *newNode=new Node(element);
    newNode->next=top;
    top=newNode;
    cout<<"Element Pushed to stack";
}

void pop(){
    if(top == NULL){
        cout<<"stack underflow";
        return;
    }
    Node *temp=top;
    cout<<"Element popped"<<temp->data<<endl;
    top=top->next;
    delete temp;
}
void display(){
     if(top == NULL){
        cout<<"stack underflow";
        return;
    }

    Node *temp=top;
    cout<<"Stack Elements";

    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);

    pop();

    display();
}
