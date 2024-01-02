// Find no of ways to climb the stairs.

#include <iostream>
using namespace std;
int countDistinctWays(int nStairs) {
    //  Write your code here.
    if(nStairs==0)
        return 1;
    else if(nStairs<0)
         return 0;
    else {
        int  ans= countDistinctWays(nStairs - 1) + countDistinctWays(nStairs - 2);
         return ans;
    }
}

int main() {
    int nStairs;
    cout << "Enter the number of stairs: ";
    cin >> nStairs;
    
    int distinctWays = countDistinctWays(nStairs);
    cout << "Number of distinct ways to climb the stairs: " << distinctWays << endl;
    
    return 0;
}
