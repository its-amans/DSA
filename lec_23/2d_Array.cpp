// ROWSUM 

// #include<iostream>
// using namespace std;
// int rowsum(int a[][3],int m,int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         int j=0;
//         for(j=0;j<m;j++){
//             sum=sum+a[i][j];
//         }
//         cout<<sum<<" ";
//     }
// }
// int main(){
//     int a[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>a[i][j];
//         }
//     }
//     rowsum(a,3,3);
// }


// max row sum 
// #include<iostream>
// using namespace std;
// int getmax(int a[][3],int m,int n){
//     int sum=0;
//     int max=0;
//     int rowindex=-1;
//     for(int i=0;i<n;i++){
//         int j=0;
//         for(j=0;j<m;j++){
//             sum=sum+a[i][j];
//         }
//         if(sum>max){
//             max=sum;
//             rowindex=i+1;
//         }
//     }
//     cout<<"MAX row aum is:"<<max <<endl<<"index is: "<<rowindex<<"row.";
// }
// int main(){
//     int a[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>a[i][j];
//         }
//     }
//     getmax(a,3,3);
// }

// sine wave matrix
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[100][100];
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Row wise representation"<<endl;
//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
//     cout<<endl<<"column wise sine representation"<<endl;
//     for(int i=1;i<=3;i++){
//         if(i%2==0){
//         for(int j=3;j>=1;j--){
//            cout<<arr[j][i]<<" ";
//         }
//         }
//         else{
//             for(int j=1;j<=3;j++){
//            cout<<arr[j][i]<<" ";
//         }
//         }
//     }
// }

// spiral sum leetcode  problem no:54..

// #include<iostream>
// #include<vector>
// using namespace std;
// void printvector(vector<int> ans){
//         for(int i=0;i<ans.size();i++){
//             cout<<ans[i]<<" ";
//         }
// }
// void spiralOrder(vector<vector<int>>& matrix) {
//         int row=matrix.size();
//         int col=matrix[0].size();
//         vector<int> ans;
    
//         int startingRow=0;
//         int endingRow=row-1;
//         int startingCol=0;
//         int endingCol=col-1;

//         int total=row*col;
//         int count=0;

//     while(count<total){

//         //starting row print kiya
//         for(int i=startingCol;count<total && i<=endingCol;i++){
//             ans.push_back(matrix[startingRow][i]);
//             count++;
//         }
//         startingRow++;

//         //ending col print kiya
//          for(int i=startingRow; count<total && i<=endingRow;i++){
//             ans.push_back(matrix[i][endingCol]);
//             count++;
//         }
//         endingCol--;

//         //ending row print karani h
//          for(int i=endingCol; count<total && i>=startingCol;i--){
//             ans.push_back(matrix[endingRow][i]);
//             count++;
//         }
//         endingRow--;

//         //starting col print kiya
//          for(int i=endingRow; count<total && i>=startingRow;i--){
//             ans.push_back(matrix[i][startingCol]);
//             count++;
//         }
//         startingCol++;
//     }
//     printvector(ans);
//     //return ans; // if want to return
// }
// int main(){
//     vector<vector<int>> arr(3, vector<int>(3));
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     spiralOrder(arr);
// }






// 90 degree rotate an 2d matrix.
// basic first reverse the matrix and then swap the alternates.


//   clockwise rotate
//   first reverse up to down, then swap the symmetry 
//   1 2 3     7 8 9     7 4 1
//   4 5 6  => 4 5 6  => 8 5 2
//   7 8 9     1 2 3     9 6 3
// 

// to rotate anticlockwise just swap alternates and then just reverse it . It will work magically.


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void printvector(vector<vector<int>>& matrix){
//         for( int i=0; i<matrix.size(); i++){
//             for( int j=0; j<matrix[0].size(); j++){
//                 cout<<matrix[i][j]<<" ";
//             }
//             cout<<endl;
//         }
// }
//      void rotate(vector<vector<int>>& matrix) {
//         reverse(matrix.begin(),matrix.end());
//         for( int i=0; i<matrix.size(); i++){
//             for( int j=i+1; j<matrix[0].size(); j++){
//                 swap( matrix[i][j], matrix[j][i]);
//             }
//         }
//         printvector(matrix);
//     }

//     int main(){
//     vector<vector<int>> arr(3, vector<int>(3));
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     rotate(arr);
// }