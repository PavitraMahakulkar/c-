// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<vector<int>> v(3,vector<int> (3));
//     int a[3][3]={{1,1,1},{1,1,1},{1,1,1}};
    
//     for(int i;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>v[i][j];
//         }
//     }
    // for(int i;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         if(v[i][j]%2!=0){
    //             if(i==0 && j==0){
    //                 a[i+1][j]=0;
    //                 a[i][j]=0;
    //                 a[i][j+1]=0;
    //             }
    //             else if(i==0 && j==2){
    //                 a[i][j]=0;
    //                 a[i+1][j]=0;
    //                 a[i][j-1]=0;
    //             }
    //             else if(i==2 && j==0){
    //                 a[i][j]=0;
    //                 a[i-1][j]=0;
    //                 a[i][j+1]=0;
    //             }
    //             else if(i==2 && j==2){
    //                 a[i][j]=0;
    //                 a[i-1][j]=0;
    //                 a[i][j-1]=0;
    //             }
    //         }
    //         else{
    //             a[i][j]=1;
    //         }
    //     }
    // }
//     int m;
//     for(int i=1;i<=3;i++)

//     {

//         for(int j=1;j<=3;j++)

//         {

//             cin>>m;

//               if(m%2==1)

//             {

//                 if(a[i][j]==0) a[i][j]=1;

//                 else a[i][j]=0;



//                 if(a[i+1][j]==0) a[i+1][j]=1;

//                 else a[i+1][j]=0;


//                 if(a[i][j+1]==0) a[i][j+1]=1;

//                 else a[i][j+1]=0;

//                  if(a[i][j-1]==0) a[i][j-1]=1;

//                 else a[i][j-1]=0;

//                 if(a[i-1][j]==0) a[i-1][j]=1;

//                 else a[i-1][j]=0;

//             }
//         }

//     }
//     for(int i;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<a[i][j];
//         }
//         cout<<endl;
//     }


// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> grid(3, vector<int>(3, 1));
    vector<vector<int>> moves(3, vector<int>(3, 0));
    
    // Read the input grid
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cin >> moves[i][j];
            if (moves[i][j] % 2 == 1) {
                grid[i][j] = 1 - grid[i][j];
                if(i > 0) grid[i-1][j] = 1 - grid[i-1][j];
                if(j > 0) grid[i][j-1] = 1 - grid[i][j-1];
                if(i < 2) grid[i+1][j] = 1 - grid[i+1][j];
                if(j < 2) grid[i][j+1] = 1 - grid[i][j+1];
            }
        }
    }

    // Output the final grid
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
