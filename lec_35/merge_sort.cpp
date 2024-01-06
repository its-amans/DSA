// MERGE SORT

#include<iostream>
using namespace std;
void merge(int *arr, int s,int e){
    int mid=s+(e-s)/2;

    // lengths of the splitted array
    int len1=mid-s+1;
    int len2=e-mid;

    // Dynamically allocating size to new arrays
    int *first=new int[len1];
    int *second=new int[len2];

    //Copying value to the firstarrays
    int Main_array_index=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[Main_array_index++];
    }

    //Copying value to the second arrays
    Main_array_index=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[Main_array_index++];
    }

    // merging both the arrays in sorted order.  // Merge two sorted array.
    int index1=0;
    int index2=0;
    Main_array_index=s;
    while(index1 < len1 && index2< len2){
        if(first[index1]<second[index2]){
            arr[Main_array_index++]=first[index1++];
        }
        else{
            arr[Main_array_index++]=second[index2++];
        }
    }

    // if the size of first array is longer then.
    while(index1<len1){
        arr[Main_array_index++]=first[index1++];
    }

    // if second array size is gretaer then first
    while(index2<len2){
        arr[Main_array_index++]=second[index2++];
    }

    delete []first;
    delete []second;
}
void mergesort(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    if(s>=e){
        return;
    }
    
    // left part sorted kr raha hu
    mergesort(arr,s,mid);

    // right part sort krunga
    mergesort(arr,mid+1,e);

    // Dono ko merge krna h
    merge(arr,s,e);
}
int main(){
    int arr[]={38,27,43,3,9,82,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    mergesort(arr,s,e);
    cout<<"The sorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}