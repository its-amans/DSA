// binary search

#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int key){
        int first=0;
        int last=n-1;
  // here if our value of start is pow(2,31) and end is pow(2,31) order the then mid will be overflowed from int range so we use 
      //int mid=(first+last)/2;
        int mid=first+(last-first)/2;
    while(first<=last){
        if(a[mid]==key){
            return mid;
        }
        else if(key>a[mid]){
            first=mid+1;    
        }
        else if(key<a[mid]){
            last=mid-1; 
        }
        int mid=first+(last-first)/2;
    }
    return -1;//not found
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"the size is "<<n<<endl;
    int key;
    cout<<"enter the key  ";
    cin>>key;
    int ans=binarysearch(a,n,key);
    cout<<"the element is at "<<ans<<" position";
}





