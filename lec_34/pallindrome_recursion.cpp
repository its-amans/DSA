// pallindrome in string 
#include<iostream>
using namespace std;
bool is_pallindrome(string &st,int s,int e) // pass by reference
{   cout<<"Calls received for:"<<st<<endl;
    if(s>e){
        return true;  
    }

    // ek case solve kiya first compare last
    if(st[s]!=st[e]){
        return false;
    }

    // bakin case recursion sambhal lega
    else{
        s++;
        e--;
        is_pallindrome(st,s,e);
    }
}
int main(){
    string st="ccnabancc";
    int s=0;
    int e=st.length()-1;
    int ans=is_pallindrome(st,s,e);
    if(ans){
        cout<<"Pallindrome";
    }
    else{
        cout<<"Not pallindrome";
    }
}