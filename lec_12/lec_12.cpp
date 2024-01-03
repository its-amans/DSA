// binary search
/*
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
*/




//first occurencxe and last occurence

#include<iostream>
using namespace std;
int firstoccurence(int a[],int n,int key){
        int first=0;
        int ans=0;
        int last=n-1;
        int mid=first+(last-first)/2;
    while(first<=last){
        if(a[mid]==key){
            ans=mid;
            last=mid-1;
        }
        else if(key>a[mid]){
            first=mid+1;    
        }
        else if(key<a[mid]){
            last=mid-1; 
        }
        mid=first+(last-first)/2;
    }
    return ans;
}
int lastoccurence(int a[],int n,int key){
        int first=0;
        int ans=0;
        int last=n-1;
        int mid=first+(last-first)/2;
    while(first<=last){
        if(a[mid]==key){
            ans= mid;
            first=mid+1;
        }
        else if(key>a[mid]){
            first=mid+1;    
        }
        else if(key<a[mid]){
            last=mid-1; 
        }
        mid=first+(last-first)/2;
    }
    return ans;
}

int main(){
    int a[8]={1,2,2,3,4,5,6,7};
    cout<<"first occurence of 2 is at index"<<firstoccurence(a,8,2)<<endl;
    cout<<"last occurence of 2 is at index"<<lastoccurence(a,8,2)<<endl;
    return 0;
}





//number of occurence
/*
#include<iostream>
using namespace std;
int firstoccurence(int a[],int n,int key){
        int first=0;
        int ans=0;
        int last=n-1;
        int mid=first+(last-first)/2;
    while(first<=last){
        if(a[mid]==key){
            ans= mid;
            last=mid-1;
        }
        else if(key>a[mid]){
            first=mid+1;    
        }
        else if(key<a[mid]){
            last=mid-1; 
        }
        mid=first+(last-first)/2;
    }
    return ans;
}
int lastoccurence(int a[],int n,int key){
        int first=0;
        int ans=0;
        int last=n-1;
        int mid=first+(last-first)/2;
    while(first<=last){
        if(a[mid]==key){
            ans= mid;
            first=mid+1;
        }
        else if(key>a[mid]){
            first=mid+1;    
        }
        else if(key<a[mid]){
            last=mid-1; 
        }
        mid=first+(last-first)/2;
    }
    return ans;
}

int main(){
    int a[8]={1,2,2,3,2,5,2,7};
    cout<<"number of occurence is : "<<(lastoccurence(a,8,2)-firstoccurence(a,8,2))+1<<endl;// HERE WE KNOW THST THE ARRAY IS SORTED SO THE KEY ELEMENT IN MULTIPLE OCCURENCES SHOULD BE IN LINEAR WAY LIKE (1 2 3 3 3 3 3 4).SO THAT FORMULA PERFECTLY FITS FOR ALL CONDITIONS
    return 0;
}
*/




//mountain peak/max element of array
/*
#include<iostream>
using namespace std;
int mountainarray(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}
int main(){
    int arr[]={1 ,2 ,5, 1, 0};
    cout<<mountainarray(arr,5);
    
}
*/



//pivot elements in array
