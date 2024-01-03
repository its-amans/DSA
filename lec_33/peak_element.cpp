// //Peak elememnt using binary search.
// #include<iostream>
// using namespace std;
// int first_occurence(int arr[],int n,int key){
//     int first=0;
//     int last=n-1;
//     int ans=0;
//     int mid=first+(last-first)/2;
//     while(first<=last){
//         if(arr[mid]==key){
//             ans=mid;
//             last=mid-1;
//         }
//         else if(arr[mid]>key){
//             last=mid-1;
//         }
//         else{
//             first=mid+1;
//         }
//        mid=first+(last-first)/2;
//     }
//     return ans;
// }
// int last_occurence(int arr[],int n,int key){
//     int first=0;
//     int last=n-1;
//     int ans=0;
//     int mid=first+(last-first)/2;
//     while(first<=last){
//         if(arr[mid]==key){
//             ans=mid;
//             first=mid+1;
//         }
//         else if(arr[mid]>key){
//             last=mid-1;
//         }
//         else{
//             first=mid+1;
//         }
//        mid=first+(last-first)/2;
//     }
//     return ans;
// }
// int main(){
//     int arr[]={1,2,2,2,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<first_occurence(arr,n,2);
//     cout<<last_occurence(arr,n,2);
//     cout<<"No of occurences:"<<last_occurence(arr,n,2)-first_occurence(arr,n,2)+1;
// }


// using recursion  .not working.
#include<iostream>
using namespace std;
int first_occurence(int arr[],int key,int first,int last){
    int ans=0;
    int mid=first+(last-first)/2;
        if(first>last){
            return -1;
        }
        if(arr[mid]==key){
            first_occurence(arr, key,first,mid-1);
        }
        else if(arr[mid]>key){
            first_occurence(arr, key,first,mid-1);
        }
        else{
            first_occurence(arr, key,mid+1,last);
        }
        return mid;
}
int last_occurence(int arr[],int key,int first ,int last){
    int ans=0;
    int mid=first+(last-first)/2;
        if(first>last){
            return -1;
        }
        if(arr[mid]==key){
            last_occurence(arr, key,mid+1, last);
        }
        else if(arr[mid]<key){
            last_occurence(arr, key,mid+1,last);
        }
        else{
            last_occurence(arr, key,first,mid-1);
        }
        return mid;
}
int main(){
    int arr[]={1,2,2,2,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int first=0;
    int last=n-1;
    cout<<first_occurence(arr,2,first,last);
    cout<<last_occurence(arr,2,first,last);
}