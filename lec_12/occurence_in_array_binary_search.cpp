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




