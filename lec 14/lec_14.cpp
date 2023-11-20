//pivot elements in rotated sorted array using binary search

//for lover pivot element
/*
#include<iostream>
using namespace std;
int pivot_element(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[]={7,9,1,2,3,4};
    cout<<pivot_element(arr,6);
}
*/



//for heigher pivot element

/*
#include<iostream>
using namespace std;
int pivot_element(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<=arr[0]){
             s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[]={7,9,1,2,3,4};
    cout<<pivot_element(arr,6);
}
*/

// SORTED ROTATED ARRAY
/*
#include<iostream>
using namespace std;
int pivot_element(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
     if(arr[mid]>=arr[0]){
        s=mid+1;
     }
     else{
        e=mid;
     }
     mid=s+(e-s)/2;
    }
    return s;
}

int binarysearch(int arr[],int s,int e,int k){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            start=mid+1;
        }
        else if(arr[mid]<k){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int arr[]={7,9,1,2,3,4};
    int k;
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    cout<<"enter the key";
    cin>>k;
    int pivot=pivot_element(arr,6);
    cout<<"pivot eleme:"<<pivot;
    if((k>=arr[pivot]) && (k<=arr[n-1]))
    {
        cout<< binarysearch(arr,pivot,e,k);
    }
    else{
        cout<< binarysearch(arr,s,pivot-1,k);
        }
}
*/



//square_root of number using binary search

/*
#include<iostream>
using namespace std;
int squareroot(int k){
    int s=0;
    int e=k;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int square=mid*mid;
        if(square==k)
        {
            return mid;
        }
        else if(square<k){
            ans=mid;
            s=mid+1;
        }
        else if(square>k){
            e=mid-1;
        }
         mid=s+(e-s)/2;
    }
    return ans;//not found
}
int main(){
    int k;
    cout<<"enter the number";
    cin>>k; 
    cout<<squareroot(k);  
}
*/


//precise square root

/*
#include<iostream>
using namespace std;
int tempsol(int k){
    int s=0;
    int e=k;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e)
    {
        long long int square=mid*mid;
        if(square==k)
        {
            return mid;
        }
        else if(square<k){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
         mid=s+(e-s)/2;
    }
    return ans;//not found
}

double solution(int k,int temproot,int precision){
    double ans=temproot;
    double factor=1;
    for(int i=0;i<precision;i++)
{
    factor=factor/10;
    for(double j=ans;j*j<k;j=j+factor)
    {
        ans=j;
    }
}
return ans;
}

int main(){
    int k;
    cout<<"enter the number";
    cin>>k; 
    int temproot= tempsol(k);
    cout<<solution(k,temproot,3);
}
*/


