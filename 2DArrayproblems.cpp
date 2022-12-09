#include<bits/stdc++.h>
using namespace std;
// Q1;
// vector<vector<int> > pascalTriangle(int n){
//     vector<vector<int> > pascal(n);

//     for(int i=0;i<n;i++){
//          pascal[i].resize(i+1);
         
//         for(int j=0;j<i+1;j++){
//             if(j==0 || j==i){
//                 pascal[i][j]=1;
//             }else{
//                 pascal[i][j]=pascal[i-1][j] + pascal[i-1][j-1];
//             }
//         }
        
//     }
//     return pascal;
// }

// Q2;

// int  maxOnesRow(vector<vector<int> > &V){

//     int maxOnes=INT_MIN;
//     int maxOnesRow = -1;
//     int columns = V[0].size();
//     for(int i=0;i<V.size();i++){
//         for(int j=0;j<V[i].size();j++){
//             if(V[i][j]==1){
//                 int numberOnes = columns - j;
//                 if(numberOnes > maxOnes){
//                 maxOnes = numberOnes;
//                 maxOnesRow = i;
//                 }
//                 break;
            
//             }

//         }
//     }
//     return maxOnesRow;
    
  
// }

// Q3;

void rotateArray(vector<vector<int> >&v){
    int n=v.size();
     // transpose
     for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);

        }
     }
    //  reverse
    for(int i=0;i<n;i++){
        reverse(v[i].begin(),v[i].end());
    }
    return;  
}


int main()
{
    // Q1;
    //  int n;
    //  cin>>n;
    //  vector<vector<int> > ans;
    //  ans = pascalTriangle(n);

    //  for(int i=0;i<ans.size();i++){ 
    //     for(int j=0;j<ans[i].size();i++){
    //         cout<<ans[i][j]<<" ";
    //     }cout<<endl;
    //  }

    //  Q2;

    // int n,m;
    // cin>>n>>m;

    // vector<vector<int> > v(n,vector<int> (m));
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cin>>v[i][j];
    //     }
    // } 
    // int res=maxOnesRow(v);
    // cout<<res<<endl;

    // Q3;  
    int n;
    cin>>n;

    vector<vector<int> > v(n,vector<int> (n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    rotateArray (v);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    


    
    
    return 0;
}  