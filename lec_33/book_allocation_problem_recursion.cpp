// book allocation problem using binaryb search


// #include<iostream>
// using namespace std;
// bool is_possible(int arr[],int n,int m,int mid){
//     int pagesum=0;
//     int studentcount=1;
//     for(int i=0;i<n;i++){
//     if((pagesum+arr[i])<=mid){
//         pagesum+=arr[i];
//     }
//     else{
//         studentcount++;
//         if(arr[i]>mid || studentcount>m){
//         return false;
//         }
//     pagesum=arr[i];
//     }
// }
//     return true;
// }
// int allocate_books(int arr[],int n,int m){
//     int s=0;
//     int ans=0;
//     int max=0;
//     for(int i=0;i<n;i++){
//         max+=arr[i];
//     }
//     cout<<"The max is:"<<max<<endl;
//     int e=max;
//     while(s<=e){
//     int mid=s+(e-s)/2;
//     cout<<"Mid is:"<<mid<<endl;
//     cout<<"mid is Possible solution: YES(1) OR NOT(0):  "<<is_possible(arr,n,m,mid)<<endl;
//         if(is_possible(arr,n,m,mid)){
//             ans=mid;
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int arr[]={10,20,30,40};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int m=2;// no of students.
//     cout<<endl<<"Minimum bno of pages allocated to a student:"<<allocate_books(arr,n,m);
// }



// using recursioin  // confusion h

#include<iostream>
using namespace std;
bool possible_solution(int arr[],int n,int m,int mid){
    int i=0;
    i++;
    int pagesum=0;
    int studentcount=1;
    if(n==0){
        return 0;
    }
    else if(pagesum+arr[i]<=mid){
        pagesum+=arr[i];
    }
    else {
        studentcount++;
        if(studentcount>m|| arr[i]>mid){
        return false;
    }
    pagesum=arr[i];
    }
    possible_solution(arr,n-1,m,mid);
    return true;
}
int  allocate_books(int arr[],int n,int m,int s,int e){
    int mid=s+(e-s)/2;
    cout<<mid<<endl;
    if(s>e){
        return -1;
    }
    else if(possible_solution(arr,n,m,mid)){
        allocate_books(arr, n, m,s,mid-1);
    }
    else{
        allocate_books(arr, n, m,mid+1,e);
    }
    return mid;
}
int main(){
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=arr[i];
    }
    int e=ans;
    int m=2;// no of students.
    cout<<endl<<"Minimum bno of pages allocated to a student:"<<allocate_books(arr,n,m,s,e);
}

