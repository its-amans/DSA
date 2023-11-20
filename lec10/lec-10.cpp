//swap alternate 

/*
#include<iostream>
using namespace std;
void swapalternate(int a[], int n){
    for(int i=0;i<n;i++){
          if(i+1<n){

            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            i++;}
    }
}
void printarray(int a[],int n){
    cout<<"the alternate swapped array is :";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
   int n;
   cin>>n;
   int a[100];
   cout<<"enter the elements ";
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   swapalternate(a,n);
   printarray(a,n);
}
*/




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





// intersection o two array
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
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[100];
cout<<"enter the elements";
for(int i=0;i<n;i++){
cin>>a[i];
}
uniqueoccurence(a,n);
}
bool uniqueoccurence(int a[],int n){
    int count=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    if((a[i]==a[j])&&(i!=j))
    {
        count++;
    }
    int ans=count;
    }
}
}