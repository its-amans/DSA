//sorting
/*#include<iostream>
using namespace std;
void printarray(int a[],int size){
   for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
   } 
}
void sortedarray(int a[],int size){
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(a[i]>a[j])
        {int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        
        
    }
    }
}
}
//pairsum
void pairsum(int a[],int size){
    int s;
    cout<<"enter the number for pair sum";
    cin>>s;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if((a[i]+a[j])==s){
             cout<<a[i]<<"  "<<a[j]<<" ";
            }
        }
    }
}
int main(){
    int a[]={1,5,3,2,4};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<size;
    sortedarray(a,size);
    
    //cout<<"the sorted array is";
    //printarray( a,size);
    pairsum(a,size);
    //sort(a.begin(),a.end());

}
*/




//triplet of sum
/*
#include<iostream>
using namespace std;
void triplesum(int a[],int size){
    int s;
    cout<<"enter the number for triplet sum :";
    cin>>s;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){

            if(((a[i]+a[j])+a[k])==s){
             cout<<a[i]<<"  "<<a[j]<<" "<<a[k]<<" ";
             exit(0);
            }
        }
    }
}
}
int main(){
    int a[]={1,5,3,2,0};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<size;
    
    
    //cout<<"the sorted array is";
    //printarray( a,size);
    triplesum(a,size);
    //sort(a.begin(),a.end());

}
*/




//sort-01
#include<iostream>
using namespace std;
int main(){
    
}