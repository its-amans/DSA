//Bubble sort using loops

// #include<iostream>
// using namespace std;
// void bubble_sort(int arr[],int n){
//     int swapped=0;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped=1;
//             }
//         }
//     }
//     if(swapped==0){
//         cout<<"Already sorted"<<endl;
//     }  
// }
// int main(){
//     int arr[]={2,3,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<n<<endl;
//     bubble_sort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
    


//Bubble sort using recursion
#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    if(n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
    }
    bubble_sort(arr,n-1);   // n-1 bcz after every pass last one is sorted.
}

int main(){
    int arr[]={1,4,2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}



