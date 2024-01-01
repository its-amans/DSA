// //SELECTION SORT

// #include<iostream>
// #include<vector>
// using namespace std;
// void selectionSort(int arr[], int n)
// {   
//     for(int i = 0; i < n-1; i++ ) {
//         int minIndex = i;
        
//         for(int j = i+1; j<n; j++) {
            
//             if(arr[j] < arr[minIndex]) 
//                 minIndex = j;
            
//         }
//         swap(arr[minIndex], arr[i]);
//     }
// }

// void printarray(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }   
// }
// int main(){
//     int arr[]={10 ,1 ,7 ,4 ,8 ,2 ,11};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<"THE SORTED ARRAY IS :";
//     selectionSort(arr ,n);
//     printarray(arr,n);
// }


#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){    // i+1 is bcz the the comparision starts ahead of i and before i all are sorted already
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
            swap(arr[minindex],arr[i]);
    }
}
void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }   
}
int main(){
    int arr[]={10 ,1 ,7 ,4 ,8 ,2 ,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"THE SORTED ARRAY IS :";
    selectionSort(arr ,n);
    printarray(arr,n);
}
