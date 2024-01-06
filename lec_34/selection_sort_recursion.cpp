// Selection sort using insertion sort..

// #include<iostream>
// using namespace std;
// void selectionSort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int minindex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[minindex]>arr[j])    // if(arr[minindex]<arr[j])   will sort in descending order.
//             {
//                 minindex=j;
//             }
//         }
//             swap(arr[i],arr[minindex]);
//     }
// }
// int main(){
//     int arr[]={10 ,1 ,7 ,4 ,8 ,2 ,11};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<"THE SORTED ARRAY IS :";
//     selectionSort(arr ,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// Selection_sort using recursion
#include<iostream>
using namespace std;
void selectionSort(int arr[],int n,int index){
    if(n==1){
        return;
    }
    int minindex=index;
    for(int i=index+1;i<n;i++){
        if(arr[minindex]>arr[i]){
            minindex=i;
        }
    }
    swap(arr[minindex],arr[index]);
    selectionSort(arr,n-1,++index);
}
int main(){
    int arr[]={10 ,1 ,7 ,4 ,8 ,2 ,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"THE SORTED ARRAY IS :";
    selectionSort(arr ,n,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

