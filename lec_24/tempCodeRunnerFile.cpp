#include<iostream>
#include<vector>
using namespace std;
vector <int> simpleseive_primeCount(int n){
    vector<int> ans;
    vector<bool> a(n+1,true);
    a[0]=a[1]=0;
    int count=0;
    for(int i=2;i<n;i++){
        if(a[i]){
            ans.push_back(i);

        for(int j=2*i;j<n;j=j+i){
            a[j]=0;
        }
    }
}
    return ans;
}


    int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    vector<int> primes = simpleseive_primeCount(n);
    cout << "Primes: ";
    for (int i = 0; i < primes.size(); i++) {
        cout << primes[i] << " ";
    }
    cout << endl;
}