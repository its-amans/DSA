// Heap sort
#include<iostream>
using namespace std;
void maxheapify(int arr[],int n,int i){
    int largest=i;

    // left child ka index
    int l=2*i+1;

    // right child ka index
    int r=2*i+2;

    //agar left wala bada h
    if(l<n &&arr[l]>arr[largest]){
        largest=l;
    }

    // agar right wala bada h
    if(r<n && arr[r]>arr[largest]){
        largest=r;
    }

    // 
    if(largest!=i){
        swap(arr[i],arr[largest]);

        // ek small tree sort ho gaya ab dusre small ko pakdege.
        //index i= largest ab max heapify me jayega bcz actual me largest jo h chota element ka index h jo abhi swap hua h. 
        maxheapify(arr,n,largest);
    }

}


void heap_sort(int arr[],int n){

    // ye n/2-1 tk islea h kyonki itne parents me hi saare child elements bhi aa jayenge array ke.
    // l=2*i+1;
    // r=2*i+2;
    for(int i=n/2-1;i>=0;i--){
        maxheapify(arr,n,i);
    }

    // decrement loop islea chalaya h kyonki hr baar ek element sort ho jayega to use phir aage consider nhi krenge array me
    for(int i=n-1;i>=0;i--){
        // 0 th element se islea swap kia h kyonkihr baar 0th position pr hi maximum element hoga maxheapify krne ke baad.
        swap(arr[0],arr[i]);  
        maxheapify(arr,i,0);
    }

}
int main(){
    int arr[]={3,1,4,5,2,4,55,5,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    heap_sort(arr,n);
    cout<<"The sorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
