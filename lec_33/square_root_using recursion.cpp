// square root of perfect square using two pointer approach.


// #include<iostream>
// using namespace std;
// int square_root(int k){
//     int s=0;
//     int e=k-1;
//     int mid=s+(e-s)/2;
    
//     while(s<=e){
//         int square=mid*mid;
//         if(square==k){
//             return mid;
//         }
//         else if(square<k){
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return -1;
// }
// int main(){
//     int k;
//     cout<<"Enter the number:";
//     cin>>k;

//     // Dynamically allocating the array and then traversing in it to find the required root.
//     /*
//     int *arr=new int [k];
//     for(int i=0;i<k;i++){
//         int p=1;
//         arr[i]={p};
//         p++;
//     }
//     for(int i=0;i<k;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<square_root(arr,k);
//     */
//     cout<<endl<<square_root(k);
// }


// using recursion  // Not working.
#include<iostream>
using namespace std;
int square_root(int k,int s,int e){
    int mid=s+(e-s)/2;
    
        if(s>e){
            return 0;
        }
        int square=mid*mid;
        if(square==k){
            return mid;
        }
        else if(square<k){
            square_root(k,mid+1, e);
        }
        else{
            square_root(k,s,mid-1);
        }
        mid=s+(e-s)/2;
}
int main(){
    int k;
    cout<<"Enter the number:";
    cin>>k;
    int s=0;
    int e=k-1;

    // Dynamically allocating the array and then traversing in it to find the required root.
    /*
    int *arr=new int [k];
    for(int i=0;i<k;i++){
        int p=1;
        arr[i]={p};
        p++;
    }
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<square_root(arr,k);
    */
    cout<<endl<<square_root(k,s,e);
}