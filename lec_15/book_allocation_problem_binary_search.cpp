//BOOK ALLOCATION PROBLEM

#include<iostream>
using namespace std;

bool possiblesolution(int arr[], int n, int m, int mid) {
    int pagesum = 0;
    int studentCount = 1;
    for (int i = 0; i < n; i++) {
        if (pagesum + arr[i] <= mid) {
            pagesum += arr[i];
        }
        else {
            studentCount++;
            if ((studentCount > m) || (arr[i] > mid)) {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m) {
    int s = 0;
    int ans = -1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int e = sum;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (possiblesolution(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;
    int result = allocateBooks(arr, n, m);
    cout << "Minimum number of pages allocated: " << result << endl;
    return 0;
}







