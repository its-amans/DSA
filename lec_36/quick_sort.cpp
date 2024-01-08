// Quick sort
// #include<iostream>
// using namespace std;
// int partition(int *arr,int s,int e){  // int arr[] same h int *arr
//     int pivot=arr[s];
//     int count =0;
//     for(int i=s+1;i<=e;i++){
//         if(arr[i]<=pivot){
//             count++;
//         }
//     }

//     // Actual pivot 
//     int pivotindex=s+count; 
//     swap(arr[pivotindex],arr[s]);

//     int i=s;
//     int j=e;
//     while(i<pivotindex && j>pivotindex){
//         while(arr[i]<=arr[pivotindex]){
//             i++;
//         }
//         while(arr[j]>arr[pivotindex]){
//             j--;
//         }

//     if(i<pivotindex && j>pivotindex)  // islea check kiya ki ho skta h ki pivotindex ke left wale element saare chote ho pivot index ke element se.
//                                       // aur right wale saare bade ho pivot index se.
//     {
//         swap(arr[i++],arr[j--]);
//     }
//   }
//   return pivotindex;
// }
// void quicksort(int *arr,int s,int e){
//     if(s>=e)  // that mean sif array have 0 or 1 element then hm usko sorted manenge.
//     {
//         return;
//     }
    
//     //Correct position of pivot.
//     int p=partition(arr,s,e);

//     // left wale ko sort krenge
//     quicksort(arr,s,p-1);

//     // right wala sort krenge
//     quicksort(arr,p+1,e);

// }
// int main(){
//     int arr[]={3,1,4,5,2,4,55,5,5,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int s=0;
//     int e=n-1;
//     quicksort(arr,s,e);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



// Why qick sort is preffred over merge sort in array?
// Ans. 1.Quick sort is preffred over merge sort because it is in place sorting alogorithm (does not require extra space) 
//      as merge sort requires o(n) extra space to store the subarrays.
//      
//      2.Also quick sort is cache concious so there is no chance for data leakage.


// Why merge sort is preffred over qick sort  in linked list?
// ANS. 1. quick sort is not preffred in linked list bcz in linked list to acces an element we have to traverse through node to node
//         to reach till ith index and 
//         IN CASE OF MERGE SORT MERGE SORT IS ALREADY DIVIDED TO A SINGLE SINGLE ELEMENTS THEN MERGED IN 
//         SORTED ORDER SO THERE IS NOP NEED TO TRAVERSE THROUGH NODES.


// qick sort is an stable (order of repeated elements) sorting algo bcz there is no swapping to sort the array.
// merge sort is not an stable (order of repeated elements) sorting algo bcz there is swpping needed to sort the subarrays.



//praticed once
#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotindex=s+count;

    // swap to fix pivot at correct position
    swap(arr[s],arr[pivotindex]);

    //sort k=rna h
    int i=s;
    int j=e;
    while(i<pivotindex && j>pivotindex){

        while(arr[i]<=arr[pivotindex]){
            i++;
        }
        while(arr[j]>arr[pivotindex]){
            j--;
        }

        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}
void quick_sort(int arr[],int s,int e){
    // Base case
    if(s>=e){
        return;
    }

    //location of pivot
    int pivot=partition(arr,s,e);

    // left wala sort krde
    quick_sort(arr,s,pivot-1);

    //right wala sort kr de
    quick_sort(arr,pivot+1,e);
}
int main(){
    int arr[]={3,1,4,5,2,4,55,5,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    quick_sort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}