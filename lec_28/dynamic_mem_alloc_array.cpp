// Dynamic memory location 1d array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int *arr=new int[n];

cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

cout<<"The array elements are:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

// To delete the memory used by heap after use
delete []arr;
}