// program for dynamicallly mem allocation of a 2d array
// #include<iostream>
// using namespace std;
// int main(){
//     int row;
//     int col;
//  cout<<"Enter the row :";
//     cin>>row;
//  cout<<"Enter the row :";
//     cin>>col;
//     // decl
//     int** arr= new int*[row];

//     // creating a 2d array
//     for(int i=0; i<row;i++){
//         arr[i]=new int[col];
//     }

//     // input values to it
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin >> arr[i][j];
//         }
//     }
    

//     cout<<endl;
//     // Output the value
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     // deleting the m,emory from heap
//     for(int i=0;i<row;i++){
//         delete [] arr[i];    // delete array i
//     }
// delete []arr;
// }