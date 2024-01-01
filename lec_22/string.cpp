// #include<iostream>
// using namespace std;
// int main(){
//     char ch[20];
//     cin>>ch;  // spaces ,tab ,enter are considered as a string.
//     cout<<ch;
//     ch[2]='\0';  // it will print only the first two characters of the string.
//     cout<<ch;

// }



// length of string.
// #include<iostream>
// using namespace std;
// int getlength(char ch[]){
//     int count=0;
//     for(int i=0; ch[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }
// int main(){
//     char ch[20]="hello";
//     //cin>>ch;
//     cout<<"Length is:" <<getlength(ch);
// }


// Reverse a string . not working properly.
// #include<iostream>
// using namespace std;
// int reversestring(char ch[], int n){
//     for(int i=n;i>=0;i--){
//         cout<<ch[i];
//     }
// }
// int main(){
//     char ch[]="hello";
//     int n=sizeof(ch)/sizeof(ch[0]);
//     cout<<reversestring(ch,n);
// }


// REverse a string using two pointer approach.
// #include<iostream>
// using namespace std;
// void reversestring(char ch[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<e){
//         swap(ch[s],ch[e]);
//         s++;
//         e--;
//     }
// }
// int main(){
//     char ch[]="hello";
//     int n=sizeof(ch)/sizeof(ch[0]);
//     reversestring(ch,n);
//     cout<<ch;
//     return 0;
// }


// Make a non case sensitive prog for pallindrome.
// Make anon case sensitive pallindrome program which consider only numbers and alphabet.(not special charecters like:!,?,@,#,$,%,^.&.*.()_+)
// #include<iostream>
// using namespace std;
// char lowercase(char ch){
   
//         if((ch>='A' && ch<='Z')||(ch>='1' && ch<='9')){
//             char temporary=ch+'a'-'A';
//             return temporary;
//         }
//            return ch;
// }
    

// bool specialcharecters(char ch){
  
//         if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')||(ch>='1' && ch<='9')){
//             return 1;
//         }
//         return 0;
//     }

// bool checkpallindrome(string a){
//     int s=0;
//     int e=a.length()-1;
//     while(s<=e){
//         if(a[s]!=a[e]){
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//         }
//         return 1;
// }
// bool ispallindrome(string s){
//     // remove special charecter
//     string temp="";
//     for(int i=0;i<s.length();i++){
//     if(specialcharecters(s[i])){
//         temp.push_back(s[i]);
//     }
//     }
//    // lowercase me 
//    for(int j=0;j<temp.length();j++){
//     temp[j]=lowercase(temp[j]);
//    }
//    return  checkpallindrome(temp);
// }
// int main(){
//     char ch[20];
//     cout<<"Enter the string:";
//     cin>>ch;
//     if(ispallindrome(ch)){
//         cout<<"pallindrome";
//     }
//     else{
//         cout<<"Not pallindrome";
//     }
// }


// Max occurenceof the chracter.
// #include<iostream>
// using namespace std;
// char maxcharoccurence(string ch){
//     int arr[26]={0};
//     int number=0;
//     for(int i=0;i<ch.length();i++){
//         char c=ch[i];
//       if(c>='a'&& c<='z'){
//         number=c-'a';
//       }
//       else if(c>='A'&&c<='Z'){
//         number=c-'A';
//       }
//       arr[number]++;
//     }
//     int max=-1;
//     int ans=0;
//     for(int i=0;i<26;i++){
//        if(arr[i]>max){
//         ans=i;
//         max=arr[i];
//        }
//     }
//     char finalans='a'+ans;
//     return finalans;
// }
// int main(){
//     char ch[20];  // string ch
//     cout<<"Enter the string :";
//     cin>>ch;      // cin>> ch;
//     cout<<maxcharoccurence(ch);
// }

//replace whitespce with a @40 in the given input string.
// #include<iostream>
// #include<string>
// using namespace std;
// void replacespaces(string ch){
//     string temp="";
//     for(int i=0;i<ch.length();i++){
//         if(ch[i] == ' '){       // double quotes will create problem.
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else{
//             temp.push_back(ch[i]);
//         }
//     }
//     for(int i=0;i<temp.length();i++){
//         cout<<temp[i];
//     }
// }
// int main(){
//     char ch[100];
//     cout<<"Enter the string:";
//     cin.getline(ch,100);
//     replacespaces(ch);
// }


// do above prog without using temp string.(ai program)

// #include <iostream>
// #include <string>

// void removeSubstring(std::string& str, const std::string& substr) {
//     size_t pos = str.find(substr);
//     while (pos != std::string::npos) {
//         str.erase(pos, substr.length());
//         pos = str.find(substr, pos);
//     }
// }

// int main() {
//     std::string str = "Hello, World! Hello, World!";
//     std::string substr = "Hello";
    
//     removeSubstring(str, substr);
    
//     std::cout << str << std::endl;
    
//     return 0;
// }

