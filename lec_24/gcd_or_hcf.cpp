// Hcf calculate
//gcd(a,b)=gcd(a-b,b)            (or gcd(a-b,b))
// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//      if(a==0){
//         return b;
//      }
//      else if(b==0){
//         return a;
//      }
//      while(a!=b){
//         if(a>b){
//             a=a-b;
//         }
//         else{
//             b=b-a;
//         }
//      }
//      return a;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<" hcf is:"<<gcd(a,b);
// }






// to calculate no of prime numbers comes under the given number.

// seive of erastotheres // complexity of   (O(n*log(logn)))

// #include<iostream>
// #include<vector>
// using namespace std;
//  int countPrimes(int n) {
//         int count=0;
//         vector<bool>prime(n+1,true);
//         prime[0]=prime[1]=false;

//         for(int i=2;i<n;i++){
//             if(prime[i]){
//                 count++;
            
//             for(int j=i*2;j<n;j=j+i){
//                 prime[j]=0;
//             }
//           }
//         }
//         return count++;
//     }

// int main(){
//     int n;
//     cin>>n;
//     cout<<"no of primes are:"<<countPrimes(n);
// }





// seive of erastosthenes using array.complexity (O(n*log(logn))). used in the place of normal method due to very low time comp.
// bcz for very large number if the computation in normal is very large like 10^12 computation then it will not work in small time limit like 1sec. bcz a normal computer can perform only approx 10^8 computation in 1 sec.


// #include<iostream>
// using namespace std;
// int simpleseive_primeCount(int a[],int n){
//     a[0]=a[1]=0;
//     int count=0;
//     for(int i=2;i<n;i++){
//         if(a[i]){
//             count++;

//         for(int j=2*i;j<n;j=j+i){
//             a[j]=0;
//         }
//     }
// }
//     return count++;
// }
// int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         arr[i]=1;
//     }
//     cout<<simpleseive_primeCount(arr,n);
// }


// seive of erastothenes can not be used bcz for very large number ,the size of array is very large.
// large array can not rememeber much old values correctly.


// // prog to print the primes using simple seive.
// #include<iostream>
// #include<vector>
// using namespace std;
// vector <int> simpleseive_primeCount(int n){
//     vector<int> ans;
//     vector<bool> a(n+1,true);
//     a[0]=a[1]=0;
//     int count=0;
//     for(int i=2;i<n;i++){
//         if(a[i]){
//             ans.push_back(i);

//         for(int j=2*i;j<n;j=j+i){
//             a[j]=0;
//         }
//     }
// }
//     return ans;
// }


//     int main(){
//     int n;
//     cout<<"Enter the number:";
//     cin>>n;
//     vector<int> primes = simpleseive_primeCount(n);
//     cout << "Primes: ";
//     for (int i = 0; i < primes.size(); i++) {
//         cout << primes[i] << " ";
//     }
//     cout << endl;
// }






// Segmented seive
// code from geeks for geeks 
// do not read


// C++ program to print all primes smaller than
// n using segmented sieve
// #include <bits/stdc++.h>
// using namespace std;

// // This functions finds all primes smaller than 'limit'
// // using simple sieve of eratosthenes. It also stores
// // found primes in vector prime[]
// void simpleSieve(int limit, vector<int> &prime)
// {
// 	// Create a boolean array "mark[0..n-1]" and initialize
// 	// all entries of it as true. A value in mark[p] will
// 	// finally be false if 'i' is Not a prime, else true.
// 	vector<bool> mark(limit + 1, true);

// 	for (int i=2; i*i<limit; i++)
// 	{
// 		// If p is not changed, then it is a prime
// 		if (mark[i] == true)
// 		{
// 			// Update all multiples of p
// 			for (int j=i*i; j<limit; j=j+i)
// 				mark[j] = false;
// 		}
// 	}

// 	// Print all prime numbers and store them in prime
// 	for (int p=2; p<limit; p++)
// 	{
// 		if (mark[p] == true)
// 		{
// 			prime.push_back(p);
// 			cout << p << " ";
// 		}
// 	}
// }

// // Prints all prime numbers smaller than 'n'
// void segmentedSieve(int n)
// {
// 	// Compute all primes smaller than or equal
// 	// to square root of n using simple sieve
// 	int limit = floor(sqrt(n))+1;
// 	vector<int> prime; 
// 	prime.reserve(limit);
// 	simpleSieve(limit, prime); 

// 	// Divide the range [0..n-1] in different segments
// 	// We have chosen segment size as sqrt(n).
// 	int low = limit;
// 	int high = 2*limit;

// 	// While all segments of range [0..n-1] are not processed,
// 	// process one segment at a time
// 	while (low < n)
// 	{
// 		if (high >= n) 
// 		high = n;
		
// 		// To mark primes in current range. A value in mark[i]
// 		// will finally be false if 'i-low' is Not a prime,
// 		// else true.
// 		bool mark[limit+1];
// 		memset(mark, true, sizeof(mark));

// 		// Use the found primes by simpleSieve() to find
// 		// primes in current range
// 		for (int i = 0; i < prime.size(); i++)
// 		{
// 			// Find the minimum number in [low..high] that is
// 			// a multiple of prime[i] (divisible by prime[i])
// 			// For example, if low is 31 and prime[i] is 3,
// 			// we start with 33.
// 			int loLim = floor(low/prime[i]) * prime[i];
// 			if (loLim < low)
// 				loLim += prime[i];

// 			/* Mark multiples of prime[i] in [low..high]:
// 				We are marking j - low for j, i.e. each number
// 				in range [low, high] is mapped to [0, high-low]
// 				so if range is [50, 100] marking 50 corresponds
// 				to marking 0, marking 51 corresponds to 1 and
// 				so on. In this way we need to allocate space only
// 				for range */
// 			for (int j=loLim; j<high; j+=prime[i])
// 				mark[j-low] = false;
// 		}

// 		// Numbers which are not marked as false are prime
// 		for (int i = low; i<high; i++)
// 			if (mark[i - low] == true)
// 				cout << i << " ";

// 		// Update low and high for next segment
// 		low = low + limit;
// 		high = high + limit;
// 	}
// }

// // Driver program to test above function
// int main()
// {
// 	int n = 100;
// 	cout << "Primes smaller than " << n << ":\n";
// 	segmentedSieve(n);
// 	return 0;
// }
