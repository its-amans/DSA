
//ARRAY USING STL

// #include<iostream>
// #include<array>
// using namespace std;
// int main(){
//     int arr[3]={1,2,3};
//     array<int,4> a={1,2,3,4}; 
//     int size=a.size();  //size of array
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<" ";
//     }

//     cout<<"ELEMENT AT INDEX 2 IS :"<<a.at(2)<<endl;  //element at index 2
//     cout<<"empty or not :"<<a.empty()<<endl;  //empty or not   . Returns bool value. 
//     cout<<"first element :"<<a.front()<<endl;  //first element
//     cout<<"last element :"<<a.back()<<endl;  //last element
//     cout<<"max size :"<<a.max_size()<<endl;  //max size
//     a.fill(10);  // all elements will be filled with 10.
//      for(int i=0;i<size;i++){
//         cout<<a[i]<<" ";
//     }
// }


//VECTOR USING STL

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//      vector<int> v;    //vector declaration
//      cout<<endl;
//      vector<int> v1(5,1);  //vector declaration with size and value (1 is filled 5 times)
//      for(int i=0;i<5;i++){  //for loop
//         cout<<v1[i]<<" ";
//      }
//      cout<<endl;
//      vector<int> v2(v1);    //copying vector v1 to v2
//      for(int i:v2){   //for each loop
//         cout<<i<<" ";
//      }
//         cout<<endl;
//      cout<<"THE CAPICITY OF VECTOR IS:"<<v.capacity()<<endl;  //capacity of vector
//      v.push_back(1);  //push_back function
//      cout<<"THE CAPICITY OF VECTOR IS:"<<v.capacity()<<endl;  //capacity of vector
//      v.push_back(2);
//      cout<<"THE CAPICITY OF VECTOR IS:"<<v.capacity()<<endl;  //capacity of vector
//      v.push_back(3);

//      //VECTOR DOUBLES ITS CAPACITY WHENEVER IT IS FULL.NOT the size.

//      cout<<"THE CAPICITY OF VECTOR IS:"<<v.capacity()<<endl;  //capacity of vector
//      cout<<"THE SIZE OF VECTOR IS:"<<v.size()<<endl;  //size of vector

//     cout<<"THE ELEMENT AT 2 INDEX IS:"<<v.at(2)<<endl;  //element at 2 index
//     cout<<"THE ELEMENT AT FRONT IS:"<<v.front()<<endl;  //element at front
//     cout<<"THE ELEMENT AT BACK IS:"<<v.back()<<endl;  //element at back
//     cout<<"THE ELEMENTS IN V VECTOR  BEFORE POP IS:<<endl;";  
//     for(int i:v){
//         cout<< i << " ";
//     }
//     v.pop_back();  //pop_back function
//     cout<<endl;
//     cout<<"THE ELEMENTS IN V VECTOR AFTER POP IS:<<endl;";  
//     for(int i:v){
//         cout<< i << " ";
//     }
//     cout<<endl<<"THE SIZE BEFORE CLEAR IS:"<<v.size()<<endl;  //size before clear
//     v.clear();  //clear function
//     cout<<"THE SIZE AFTER CLEAR IS:"<<v.size()<<endl;  //size after clear
// }




//deque using stl
/*
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);  //push_back function
    d.push_front(2);  //push_front function
    d.push_front(3);
    cout<<"THE ELEMENTS IN DEQUE ARE:"<<endl;
    for(int i:d){
        cout<< i<<" ";
    }
    cout<<endl<<"THE CURRENT ELEMENTS IN DQUEUE ARE:"<<endl;
    d.pop_front();  //pop_front function
    for(int i:d){
        cout<< i<<" ";
    }
    cout<<endl<<"THE CURRENT ELEMENTS IN DQUEUE ARE:"<<endl;
    d.pop_back();  //pop_back function
    for(int i:d){
        cout<< i<<" ";
    }
    deque<int> d1(5,1);  //deque declaration with size and value
    cout<<endl<<"THE ELEMENTS IN DEQUE ARE:"<<endl;
    for(int i:d1){
        cout<<i<<" "; 
    }
    deque<int> d2(d1);  //copying deque d1 to d3
    cout<<endl<<"THE ELEMENTS IN DEQUE AFTER COPY ARE:"<<endl;
    for(int i:d2){
        cout<<i<<" ";
    }
    deque<int> d3={1,2,3,4,5};  //deque declaration
    cout<<endl<<"THE ELEMENTS IN  D3 DEQUE ARE:"<<endl;
    for(int i:d3){
        cout<<i<<" "; 
    }
    cout<<endl<<"THE ELEMENT AT FRONT IS:"<<d3.front()<<endl;  //element at front
    cout<<"THE ELEMENT AT BACK IS:"<<d3.back()<<endl;  //element at back
    cout<<"SIZE BEFORE ERASE IS :"<<d3.size()<<endl;
    d3.erase(d3.begin(),d3.begin()+2);  //erase function. In this we have to give the range of the elements to be deleted.
    cout<<"SIZE AFTER ERASE IS :"<<d3.size()<<endl;
    cout<<endl<<"THE ELEMENTS  NOW IN  D3 DEQUE ARE:"<<endl;
    for(int i:d3){
        cout<<i<<" "; 
    }
    cout<<endl<<"THE MAXSIZE OF D3 DEQUE IS:"<<d3.max_size()<<endl;  //max_size function. IT RETURNS THE MAX SIZE THAT THE DEQUE CAN HOLD.(EX:1073741823)
}
*/


//LIST USING STL
/*
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;  //list declaration
    l.push_back(1);  //push_back function
    l.push_front(2);  //push_front function
    l.push_front(3);
    cout<<"THE ELEMENTS IN LIST ARE:"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl<<"THE SIZE OF LIST IS:"<<l.size()<<endl;  //size of list
    cout<<"THE FRONT ELEMENT IS :"<<l.front()<<endl;  //front element
    cout<<"THE LAST ELEMENT IS:"<<l.back()<<endl;  //last element
    list<int> l1(l) ;  //copying list l to l1
    cout<<"THE COPIED ELEMENT ARE:"<<endl;
    for(int i:l1){
        cout<<i<<" ";
    }
    l.pop_front();   //pop_front function
    cout<<endl<<"THE ELEMENTS  CURRENTLY IN LIST ARE:"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    l.pop_back();   //pop_back function
    cout<<endl<<"THE ELEMENTS  CURRENTLY IN LIST ARE:"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    
    list<int> l2={1,2,3,4,5};  //list declaration
    cout<<endl<<"THE SIZE OF LIST IS:"<<l2.size()<<endl; 
    cout<<endl<<"THE ELEMENTS IN LIST BEFORE ERASE ARE:"<<endl;
    for(int i:l2){
        cout<<i<<" ";
    }
    l2.erase(l2.begin());  //can be deleted by giving the index and by using begin and last function.
    cout<<endl<<"THE SIZE OF LIST AFTER ERASE IS:"<<l2.size()<<endl; 
    cout<<endl<<"THE ELEMENTS IN LIST AFTER ERASE ARE:"<<endl;
    for(int i:l2){
        cout<<i<<" ";
    }
}
*/



//STACK USING STL
/*
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;    //stack declaration
    s.push("AMAN");     //push function
    s.push("KUMAR");
    s.push("SRIVASTAVA");
    cout<<"THE ELEMENT AT TOP OF STACK:"<<endl;
    cout<<s.top()<<endl;    //top function
    s.pop();                //pop function
    cout<<"THE ELEMENT AT TOP OF STACK AFTER POP:"<<endl;  
    cout<<s.top()<<endl; 
    cout<<"THE SIZE OF STACK IS :"<<s.size()<<endl;   //size function
    cout<<s.empty()<<endl;  //empty function . IT RETURN SANSWER IN BOOL FORM i.e.,1 (if atack is empty) OR 0 (if stack is not empty)
    cout<<"THE STACK ELEMENTS ARE:"<<endl;
    for(int i=0;i<3;i++){
        cout<<s.top()<<endl;  
        s.pop();   
    }
}
*/



//QUEUE USING STL
/*
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> s;   //queue declaration
    s.push("AMAN");    //push function
    s.push("KUMAR");
    s.push("SRIVASTAVA");
    cout<<"THE SIZE OF QUEUE IS:"<<s.size()<<endl;
    s.pop();  //pop function. IT follows the fifo order so it delete the element which is pushed first.
    cout<<"THE SIZE OF QUEUE AFTER POP IS:"<<s.size()<<endl;
    int n=s.size();
    for(int i=0;i<n;i++){
        cout<<s.front()<<endl;  //front function
        s.pop();
    }
    cout<<s.empty(); //empty function . IT RETURN SANSWER IN BOOL FORM i.e.,1 (if queue is empty) OR 0 (if queue is not empty)
}
*/


//PRIORITY QUEUE USING STL
/*
#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int> max; //priority queue declaration
    //min heap
    priority_queue< int,vector<int>,greater<int> > min;  //min priority queue declaration 
    max.push(4);
    max.push(2);
    max.push(5);
    max.push(4);
    max.push(3);
    cout<<"THE SIZE OF MAX HEAP QUEUE IS:"<<max.size()<<endl;
    int n=max.size();
    cout<<"THE ELEMENTS IN MAX HEAP QUEUE ARE:"<<endl;
    for(int i=0;i<n;i++){
        cout<<max.top()<<endl;
        max.pop();
    }
    min.push(2);
    min.push(1);
    min.push(4);
    min.push(3);
    min.push(5);
    cout<<"THE SIZE OF MIN HEAP QUEUE IS:"<<min.size()<<endl;
    int x=min.size();
    cout<<"THE ELEMENTS IN MIN HEAP QUEUE ARE:"<<endl;
    for(int i=0;i<x;i++){
        cout<<min.top()<<endl;
        min.pop();
    }
    cout<<"THIS BOOL TELLS THAT MIN QUEUE IS EMPTY OR NOT:"<<min.empty();  //empty function . IT RETURN SANSWER IN BOOL FORM i.e.,1 (if queue is empty) OR 0 (if queue is not empty)
}
*/


//SET USING STL
/*
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s; //set declaration
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(5);
    cout<<"THE SIZE OF SET IS:"<<s.size()<<endl;  //size function
    cout<<endl<<"THE ELEMENTS IN SET ARE:"<<endl;
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl<<"THIS BOOL TELLS THAT SET IS EMPTY OR NOT:"<<s.empty()<<endl;  //empty function . IT RETURN SANSWER IN BOOL FORM i.e.,1 (if set is empty) OR 0 (if set is not empty)
    
    // this block is just to find the element 3 in set and print the elements after 3.
    cout<<endl<<"THE ELEMENTS AFTER 3 ARE:"<<endl;
    set<int>::iterator itr=s.find(3);       //find function
    for(auto it=itr;it!=s.end();it++){      //for loop
        cout<<*it<<" ";
    }

    cout<<endl<<"THE ELEMENT 3 IS PRESENT OR NOT:"<<s.count(3)<<endl;      //find function
    cout<<endl<<"THE ELEMENTS IN SET BEFORE ERASE ARE:"<<endl;
    for(int i:s){
        cout<<i<<" ";
    }
    //s.erase(s.begin());                    //THIS ERASE FUNCTION DELETE AN ELEMENT FROM 0 INDEX.
    set<int>::iterator it=s.begin();         //iterator declaration
    it++;
    s.erase(it);                             //erase function which will delete the element at index 1.
    
    cout<<endl<<"THE ELEMENTS IN SET AFTER ARE:"<<endl;
    for(int i:s){
        cout<<i<<" ";
    }
}
*/

//INSERT,FIND,ERASE AND COUNT HAVE TIME COMPLEXITY OF O(LOGN) WHERE N IS THE SIZE OF SET.
//SIZE,BEGIN,END,EMPTY HAVE TIME COMPLEXITY OF O(1).



//MAP USING STL
/*
#include<iostream>
#include<map>
using namespace std;
int main(){
   //MAP PRINTS THE ELEMENYT IN SORTED ORDER ACCORDING TO THE KEY.
   //IF YOU USE UNORDERED MAPP THEN IT WILL PRINT THE ELEMENTS IN RANDOM ORDER MAY BE BY CHANCE IT IS SORTED BUT NOT ALWAYS.
   map<int,string> m;   //map declaration
   m[1]="AMAN";         //insert function
   m[5]="SRIVASTAVA";
   m[2]="KUMAR";
   m.insert({3,"VAIBHAV"});   //insert function
   for(auto i:m){
    cout<< i.first <<" "<< i.second<<endl;  //first and second function
   }
   cout<<"THE SIZE OF THE MAP IS:"<<m.size()<<endl;  //size function
   cout<<"THE ELEMENT AT 2 INDEX IS:"<<m.at(2)<<endl;  //at function
   cout<<"THE ELEMENT AT 2 INDEX IS:"<<m[2]<<endl;  //at function another way can be targeted by using [](key).
   cout<<"IT GIVES THE BOOLEAN ANSWER THAT ELEMENT IS PRESENT OR NOT:"<<m.count(13)<<endl;  //count function
    auto it =m.find(3);     //find function.FIND FUNCTION RETURNS THE FIND FUNCTION POINTS TO THE ELEMENT AT THE GIVEN KEY AND ITS ONWARD ELEMENTS ADDRESS.
    cout<<"THE ELEMENT TO BE FIND AND ITS ONWARD ELEMENTS:"<<endl;
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;//THE ITERATOR POINTS TO THE ADDRESS OF THE TARGET ELEMENT AND ITS ONWARD ELEMENT .SO TO PRINT THE VALUES AT THE ADD OF ITERATOR WE USE *.
    }

   cout<<"THE ELEMENTS BEFORE ERASE ARE:"<<endl;
   for(auto i:m){
    cout<< i.first<<" "<<i.second<<endl;
   }
   m.erase(2);  //erase function
   cout<<"THE ELEMENTS AFTER ERASE ARE:"<<endl;
   for(auto i:m){
    cout<< i.first<<" "<<i.second<<endl;
   }
}
*/


//UNORDERED MAP AND UNORDERED SET BACHA H USE KR LENA.  


//algoriths which are commonly used 
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(20);
    v.push_back(40);
    v.push_back(30);
    v.push_back(50);
    v.push_back(10);
    sort(v.begin(),v.end());  //sort function
    cout<<"THE MIN ELEMENT IS:"<<*min_element(v.begin(),v.end())<<endl;  //min_element function
    cout<<"THE MAX ELEMENT IS:"<<*max_element(v.begin(),v.end())<<endl;  //max_element function
    cout<<"THE ELEMENTS AFTER SORTING ARE:"<<endl;
    for(int i:v){
    cout<< i<<" ";
    }
    cout<<endl<<"THE LOWER BOUND IS at index:"<<lower_bound(v.begin(),v.end(),40)-v.begin()<<endl;  //lower_bound function
    cout<<"THE UPPER BOUND IS at index:"<<upper_bound(v.begin(),v.end(),40)-v.begin()<<endl;
    cout<<endl<<"FINDING ELEMENT:"<<binary_search(v.begin(),v.end(),30)<<endl;  //binary_search function
    int a=10;
    int b=20;
   
    cout<<"THE MIN ELEMENT IS:"<<min(a,b)<<endl;   //min function
    cout<<"THE MAX ELEMENT IS:"<<max(a,b)<<endl;   //max function
    swap(a,b);  //swap function
    cout<<"THE SWAPPED ELEMENTS ARE:"<<a<<" "<<b<<endl;

    string s="AMAN";
    reverse(s.begin(),s.end());  //reverse function
    cout<<"THE REVERSED STRING IS:"<<s<<endl;

    cout<<"THE ELEMENTS before rotation ARE:"<<endl;
    for(int i:v){
    cout<< i <<" ";
    }
    cout<<endl;
    rotate(v.begin(),v.begin()+2,v.end());  //rotate function.rotate(v.begin(),v.end(),v.end()); to rotate all the elements.
    cout<<"THE ELEMENTS AFTER  2 rotation ARE:"<<endl;
    for(int i:v){
    cout<< i <<" ";
    }
}
*/