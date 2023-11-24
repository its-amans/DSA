//SELECTION SORT

#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for (int i = 0; i < n-1; i++)//for (int i = 1; i < n; i++)
    {
        int  j;
        int temp=arr[i];
        for (j=i; j >= 0; j--)//for(j=i-1;j>=0;j--)
        {
            if(temp<arr[j-1])//if(temp<arr[j])
            {
                arr[j]=arr[j-1];//arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j]=temp;//arr[j+1]=temp;
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
    selectionsort(arr ,n);
    printarray(arr,n);
}

