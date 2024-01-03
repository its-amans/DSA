//PAINTERS PARTITION PROBLEM

#include<iostream>
using namespace std;
bool possiblesol(int arr[] ,int n ,int m ,int mid){
    int sectionsum=0;
    int paintercount=1;
    for(int i=0;i<n;i++){
        if(sectionsum+arr[i]<=mid){
            sectionsum +=arr[i];
        }
        else{
            paintercount++;
            if(paintercount>m||arr[i]>mid){
                return false;
            }
            sectionsum=arr[i];
        }
    }
    return true;
}
int painterPartition(int arr[] ,int n, int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    while(s <= e){
    int mid= s + (e - s)/ 2;
        if(possiblesol(arr ,n ,m ,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid= s + (e - s)/ 2;
    }
    return ans;
}
int main(){
    int arr[] = {5,5,5,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;
    int result;
    cout<<"the partition of sections are:"<<painterPartition(arr,n,m);
}
