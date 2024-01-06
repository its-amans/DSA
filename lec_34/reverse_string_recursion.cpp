// time comp o(n);

// #include<iostream>
// using namespace std;
// int main(){
//     string st="abcd";
//     for(int i=st.length()-1;i>=0;i--){
//         cout<<st[i];
//     }
// }



//time comp O(log n)
// #include<iostream>
// using namespace std;
// int main(){
//     string st="abcd";
//     int s=0;
//     int e=st.length()-1;
//     while(s<=e){
//         swap(st[s],st[e]);
//         s++;
//         e--;
//     }
//     cout<<st;
// }



//Reverse The string using recursion
#include<iostream>
using namespace std;
void reverse_string(string &st,int s,int e) // pass by reference
{   cout<<"Calls received for:"<<st<<endl;
    if(s>e){
        return;  // means just return back
    }
    else{
        swap(st[s],st[e]);
        s++;
        e--;
        reverse_string(st,s,e);
    }
}
int main(){
    string s="abcde";
    int i=0;
    int j=s.length()-1;
    reverse_string(s,i,j);
    cout<<s;  // can be directly printed or print by using loop like array.
}
