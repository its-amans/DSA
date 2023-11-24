
//ARRAY USING STL
/*
#include<iostream>
#include<array>
using namespace std;
int main(){
    int arr[3]={1,2,3};
    array<int,4> a={1,2,3,4}; 
    int size=a.size();  //size of array
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }

    cout<<"ELEMENT AT INDEX 2 IS :"<<a.at(2)<<endl;  //element at index 2
    cout<<"empty or not :"<<a.empty()<<endl;  //empty or not    
    cout<<"first element :"<<a.front()<<endl;  //first element
    cout<<"last element :"<<a.back()<<endl;  //last element
}
*/

//VECTOR USING STL
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int> v;    //vector declaration
     cout<<endl;
     for(int i:v){  //for each loop
         cout<<i<<" ";
     }
     vector<int> v1(5,1);  //vector declaration with size and value
     for(int i=0;i<5;i++){  //for loop
        cout<<v1[i]<<" ";
     }
     cout<<endl;
     vector<int> v2(v1);    //copying vector v1 to v2
     for(int i:v2){   //for each loop
        cout<<i<<" ";
     }
        cout<<endl;
     cout<<"THE CAPICITY OF VECTOR IS:"<<v.capacity()<<endl;  //capacity of vector
     v.push_back(1);  //push_back function
     cout<<"THE CAPICITY OF VECTOR IS:"<<v.capacity()<<endl;  //capacity of vector
     v.push_back(2);
     cout<<"THE CAPICITY OF VECTOR IS:"<<v.capacity()<<endl;  //capacity of vector
     v.push_back(3);
     cout<<"THE CAPICITY OF VECTOR IS:"<<v.capacity()<<endl;  //capacity of vector
     cout<<"THE SIZE OF VECTOR IS:"<<v.size()<<endl;  //size of vector

    cout<<"THE ELEMENT AT 2 INDEX IS:"<<v.at(2)<<endl;  //element at 2 index
    cout<<"THE ELEMENT AT FRONT IS:"<<v.front()<<endl;  //element at front
    cout<<"THE ELEMENT AT BACK IS:"<<v.back()<<endl;  //element at back
    cout<<"THE ELEMENTS IN V VECTOR  BEFORE POP IS:<<endl;";  
    for(int i:v){
        cout<< i << " ";
    }
    v.pop_back();  //pop_back function
    cout<<endl;
    cout<<"THE ELEMENTS IN V VECTOR AFTER POP IS:<<endl;";  
    for(int i:v){
        cout<< i << " ";
    }
    cout<<endl<<"THE SIZE BEFORE CLEAR IS:"<<v.size()<<endl;  //size before clear
    v.clear();  //clear function
    cout<<"THE SIZE AFTER CLEAR IS:"<<v.size()<<endl;  //size after clear
}
*/


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




