/*
#include<iostream>
#include<vector>
using namespace std;
vector<int> revarray( vector<int> v){
    int s=0;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void printarray(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    cout<<"THE REV ARRAY IS:";
    vector<int> ans=revarray(v);
    printarray(ans);
}

*/


//program to print rev after an index
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> revarray( vector<int> v,int i){
//     int s=i+1;   // +1 isliye kiya h kyuki index se aage wale ko reverse krna h
//     int e=v.size()-1;
//     while(s<=e){
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }
// void printarray(vector<int> v){
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector<int> v={1,2,3,4,5};
//     // v.push_back(11);
//     // v.push_back(7);
//     // v.push_back(3);
//     // v.push_back(12);
//     // v.push_back(4);
//     int i;
//     cout<<"ENTER THE INDEX:";
//     cin>>i;
//     cout<<"THE REV ARRAY IS:";
//     vector<int> ans=revarray(v,i);
//     printarray(ans);
// }





// Baad me solve kiya tha same hi h

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> v={1,2,3,4,5};
//     int s=0;
//     int e=v.size()-1;
//     while(s<e){
//      swap(v[s],v[e]);
//      s++;
//      e--;
//     }
//     for (int i:v){
//         cout<<i<<" ";
//     }
// }



// pro to print reverse after the index.
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int index;
//     cout<<"enter the index";
//     cin>>index;
//     vector <int> v={1,2,3,4,5};
//     int s= index+1;  // +1 isliye kiya h kyuki index se aage wale ko reverse krna h
//     int e =v.size()-1;
//     while(s<e){
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }
//     for(int i:v){
//         cout<<i<<" ";
//     }
// }