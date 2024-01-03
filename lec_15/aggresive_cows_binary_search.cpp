
//AGGRESSIVE COW PROBLEM

#include<iostream>
#include <algorithm>
using namespace std;
bool possiblesol(int arr[],int m,int n ,int mid){
    int Cowcount=1;
    int lastpos=arr[0];
    for(int i=0;i<n;i++){
      if(arr[i]-lastpos>=mid){
         Cowcount++;
         if(Cowcount==m){
            return true;
         }
         lastpos=arr[i];
      }
    }
    return false;
}
int maxdistancecow(int arr[],int m, int n){
    int s=0;
    int maxi=0;
    int ans=-1;
    for(int i=0;i<n;i++){
       maxi=max(maxi,arr[i]);
    }
    int e=maxi;
    int mid= s + (e - s)/2;
    while(s<=e){
        if(possiblesol(arr, m, n ,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid= s + (e - s)/2;
    }
    return ans;
    
}
#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
      for(int j=i+1;j<n;j++)
      {
        if(arr[j]<arr[min_index]){
            min_index=j;
        }
      }
      if(min_index!=i)
      swap(arr[min_index],arr[i]);
    }
}

int main(){
    int a[]={4,2,1,3,6};
    int n=sizeof(a)/sizeof(a[0]);
    selectionsort(a, n);
    int m=2;
    cout<<"The maximum possible distance between cows are: "<<maxdistancecow(a,m,n);
}
