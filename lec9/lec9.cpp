//this wiil run only in gcc compiler (like replit)and our compiler is mingw
//program to initialise every elemrnt of array with same value
//loops also can be used for this
//initialisation with 0 is default A[100]={0}; can initialise all the 100 elements with 0.
/*
#include<iostream>
using namespace std;
int main(){
    int array[100] = {[ 0 ... 99 ]= 1 };
    for(int i=0;i<100;i++){
        cout<<array[i]<<"    ";
    }
}
*/
//program to find the max and min elements of array
/*
#include<iostream>
#include<math.h>
using namespace std;
int getmin(int a[],int size)
{int mini=a[0];
for(int i=0;i<size;i++){
mini=min(mini,a[i]);// here min is the function
//if(a[i]<mini)
//{
//  mini=a[i];
//}}
return mini;
}
int getmax(int a[],int size)
{int max=a[0];
for(int i=0;i<size;i++){
if(a[i]>max){
    max=a[i];
}
}
return max;
}
int main()
{   int size;
    cin>>size;
    int a[100];
    cout<<"enter the elements of array";
    for(int i=0;i<size;i++){
     cin>>a[i];
    }
  cout<<"the max element"<<getmax(a,size)<<endl;
  cout<<"the min element"<<getmin(a,size)<<endl;
  
}*/
//program to find the sum of all elements of array
/*
#include<iostream>
using namespace std;
int arraysum(int a[],int size)
{
    int sum=0;
    for(int i=0;i<size;i++){
     sum=sum+a[i];
    }
    return sum;

}
int main(){
    int size;
    cin>>size;
    int a[100];
    cout<<"enter the elements of array";
    for(int i=0;i<size;i++){
     cin>>a[i];
    }
    cout<<"the sum is"<<arraysum(a,size);
}
*/
//linear search
// cn be made by using bool function also if returns 1 means key found if returns 0 means key not found
/*
#include<iostream>
using namespace std;
void linearsearch( int a[],int size){
int key;
int count=0;
cout<<"enter the key element";
cin>>key;
for(int i=0;i<size;i++){
if(key==a[i]){
    cout<<key<<"  found at "<<i<<"position";
    }
else{
    count++;
}
}
if(count==size){
    cout<<"key not found";
}
}


int main(){
    int size;
    int a[100];
    cout<<"enter the size of array";
    cin>>size;
    cout<<"enter the elements of array";
    for(int i=0;i<size;i++){
     cin>>a[i];
    }
    linearsearch( a,size);

}
*/





//reverse the array

#include<iostream>
using namespace std;
//print array can be skipped
void printarray(int a[],int n){
    cout<<"the array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
}
// if we dont want to use b[100] to reverse then we can use swapping technique
/*void reverse(int a[],int n){
    int start=0;
    int end=n-1;
    while(start<end)
    {
       //int  temp=a[start];
        //a[start]=a[end];
        //a[end]=temp;
        //or simply use predefined function swap
        swap(a[start],a[end]);
        start++;
        end--;
    }
    }*/

void reverse(int a[],int n){
    int b[100];
    for(int i=0;i<n;i++){
        b[i]=a[n-i-1];
        }
    cout<<"the reversed array is";
    printarray(b,n);

    
}
int main(){
    int n;
    cin>>n;
    int a[100];
    int b[100];
    cout<<"enter the elements";
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    reverse(a,n) ;
}
