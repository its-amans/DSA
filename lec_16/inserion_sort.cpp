// INSERTION_SORT

#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for (int i = 1; i < n-1; i++)
    {
        int  j=i-1;
        int temp=arr[i];
        for (; j >= 0; j--)
        {
            if(temp<arr[j])
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        // the j is taken i-1 i.e the previous element of i and out of the loop of j we have increment j  by 1 to get the correct position of i.if it is printed inside the loop then  arr[j]=temp is printed.
        arr[j+1]=temp;
    }
}
void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }   
}
int main(){
    int arr[]={10 ,1 ,7 ,4 ,8 ,2 ,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"THE SORTED ARRAY IS :";
    insertionsort(arr ,n);
    printarray(arr,n);
}

