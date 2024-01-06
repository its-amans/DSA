// count inversion
// this will tell about how much the array is sorted. i.e.(count=0)for sorted array
// if two elements of array forming 
// a[i] > a[j] and i < j. Then it will counted in count inversion.


// Brute force/ Naive approach  .. Time comp(O(n^2)).
// int count=0;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         if(arr[i]>arr[j]){
//             count++;
//         }
//     }
// }
// cout<<count;


#include<iostream>
using namespace std;
int merge(long long arr[], int s,int e){
    
    long long int mid=s+(e-s)/2;
    
    long long count=0;  // modification 1
    
    // lengths of the splitted array
    long long int len1=mid-s+1;
    long long int len2=e-mid;

    // Dynamically allocating size to new arrays
    int *first=new int[len1];
    int *second=new int[len2];

    //Copying value to the firstarrays
    long long int Main_array_index=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[Main_array_index++];
    }

    //Copying value to the second arrays
    Main_array_index=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[Main_array_index++];
    }

    // merging both the arrays in sorted order.  // Merge two sorted array.
    long long int index1=0;
    long long int index2=0;
    Main_array_index=s;
    while(index1 < len1 && index2< len2){
        if(first[index1]<=second[index2]){
            arr[Main_array_index++]=first[index1++];
        }
        else{
            arr[Main_array_index++]=second[index2++];
            //here a[index1]>a[index2]  and also a[index1+1],a[index1+2],a[index1+3]...)>a[index2]  so.
            count+=len1-index1;
        }
    }

    // if the size of first array is longer then.
    while(index1<len1){
        arr[Main_array_index++]=first[index1++];
    }

    // if second array size is gretaer then first
    while(index2<len2){
        arr[Main_array_index++]=second[index2++];
    }

    delete []first;
    delete []second;  
    
    return count;
}
int mergesort(long long arr[],int s,int e){
    long long int mid=s+(e-s)/2;
    long long count=0;
    if(s>=e){
        return 0;
    }
    
    // left part sorted kr raha hu
    count+=mergesort(arr,s,mid);    // pehle left wale array me kitne inversion h wo count krega
    

    // right part sort krunga
    count+=mergesort(arr,mid+1,e);   // phir right wale array me kitne inversion h wo count krega
    

    // Dono ko merge krna h
    count+=merge(arr,s,e);        // Then fir jb hm merge kr rhe hong etb count krega ki dono se kitne inversion nikal rhe h
    return count;
}

int main(){
    long long  arr[]={38,27,43,3,9,82,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    cout<<mergesort(arr,s,e);
}

