char maxcharoccurence(string ch){
    int arr[26]={0};
    int number=0;
    for(int i=0;i<ch.length();i++){
        char c=ch[i];
      if(c<='a'&& c>='z'){
        number=c-'a';
      }
      else if(c<='A'&&c>='Z'){
        number=c-'A';
      }
      arr[number]++;
    }
    int max=-1;
    int ans=0;
    for(int i=0;i<26;i++){
       if(arr[i]>max){
        ans=i;
        max=arr[i];
       }
    }
    char finalans='a'+ans;
    return finalans;
}
int main(){
    char ch[20];  // string ch
    cout<<"Enter the string :";
    cin>>ch;      // cin>> ch;
    cout<<maxcharoccurence(ch);
}
