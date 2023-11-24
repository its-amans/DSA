//BUBBLE SORT

#include<iostream>
using namespace std;
bool swapped= false;
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++)
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=true;
        }
    //it is just because to decrese time complexity 
    //already swapped
    if(swapped==false){
        break;
    }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={10 ,1 ,7 ,6 ,14 ,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"THE SORTED ARRAY IS :"<<endl;
    bubblesort(arr,n);
}

