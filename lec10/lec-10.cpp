//swap alternate 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         swap(arr[i],arr[i+1]);
//         i++;
//     }
//     cout<<"The new array is :";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }




// Wrong Approach  .TO find the unique element in an array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,1,4,2,4,4,3,3};
//     int count;
//     int unique=0;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         int temp=arr[i];
//         count=0;
//         for(int j=0;j<n;j++){
//             if(arr[j]==temp){
//                 count++;
//                 unique=arr[j];
//             }
//         }
//     }
//     if(count<=1){
//         cout<<"unque is:"<<unique;
//     }
//     else{
//         cout<<"not unique";
//     }
// }


//find duplicate element

/*
#include<iostream>
using namespace std;
 void duplicate(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            if((a[i]==a[j])&&(i!=j)){
              cout<<a[i]<<" found at "<<i<<" and "<<j<<" position"<<endl;  
            }  
        }
    }
}
int main(){
int n;
cin>>n;
int a[100];
cout<<"enter the elements of array";
for(int i=0;i<n;i++){
    cin>>a[i];
}
duplicate(a,n);
}
*/




//unique elements

/*
#include<iostream>
using namespace std;
 int unique(int a[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        //a^a=0 and (0^a or 0^A^0)=a
        ans=ans^a[i];
    }
    return ans;
}
int main(){
int n;
cin>>n;
int a[100];
cout<<"enter the elements of array";
for(int i=0;i<n;i++){
    cin>>a[i];
}
int ans=unique(a,n);
cout<<"the unique element is"<<ans;
}
*/

//OUTPUT
/*enter the elements of array1
2
3
2
1
the unique element is3*/





// intersection of two array
/*
#include<iostream>
using namespace std;
 void unique(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            if(a[i]==b[j]){
              cout<<a[i]<<" "; 
            }
        }
    }
}
int main(){
int n;
cin>>n;
int a[100];
int b[100];
cout<<"enter the elements of 1 array";
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<"enter the elements of  2 array";
for(int i=0;i<n;i++){
    cin>>b[i]<<endl;
}
cout<<"the intersection is";
unique(a,b,n);
}
*/
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;
// int a[100];
// cout<<"enter the elements";
// for(int i=0;i<n;i++){
// cin>>a[i];
// }
// uniqueoccurence(a,n);
// }
// bool uniqueoccurence(int a[],int n){
//     int count=0;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//     if((a[i]==a[j])&&(i!=j))
//     {
//         count++;
//     }
//     int ans=count;
//     }
// }
// }