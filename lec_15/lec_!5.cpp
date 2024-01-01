//BOOK ALLOCATION PROBLEM
/*
#include<iostream>
using namespace std;

bool possiblesolution(int arr[], int n, int m, int mid) {
    int pagesum = 0;
    int studentCount = 1;
    for (int i = 0; i < n; i++) {
        if (pagesum + arr[i] <= mid) {
            pagesum += arr[i];
        }
        else {
            studentCount++;
            if ((studentCount > m) || (arr[i] > mid)) {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m) {
    int s = 0;
    int ans = -1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int e = sum;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (possiblesolution(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;
    int result = allocateBooks(arr, n, m);
    cout << "Minimum number of pages allocated: " << result << endl;
    return 0;
}
*/




//PAINTERS PARTITION PROBLEM
/*
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
*/



//AGGRESSIVE COW PROBLEM
/*
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
*/