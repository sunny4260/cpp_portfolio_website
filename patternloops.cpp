#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    /*for(int i=1;i<=n;i++){  // rectangle patter
      for(int j=1;j<=m;j++){
        cout<<"*";
      }
      cout<<endl;
    }*/

// holo pattern //

    /*for (int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        if(i==1 || j==1 || i==n || j==m){
          cout<<"*";
        }
        else{
          cout<<" ";
        }
      }
      cout<<endl;
    }*/

// triangluar pattern //

   /* for(int i=n;i>=1;--i){
      for(int j=1;j<=i;j++){
        cout<<"*";
      }
      cout<<endl;
    }*/

    /*for(int i=1;i<=n;i++){
      for(int j=1;j<=(n-i);j++){
        cout<<" ";
      }
      for(int k=1;k<=(2*i-1);k++){
        cout<<"*";
      }
      cout<<endl;
    }*/

    // Numerical rectangular pattern //

    /* for(int i=1;i<=n;i++){
      for(int j=i;j<=n;j++){
        cout<<j;
      }
      for(int k=1;k<=(i-1);k++){
        cout<<k;
      }
      cout<<endl;
     }*/

     // holo numrical //

    /* for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        
        if(i==1 || j==1 || i==n || j==m){
          cout<<j;
        }
        else{
          cout<<" ";
        }
      }
      cout<<endl;
     }*/

    /* for(int i=1;i<=n;i++){
      for(int j=1;j<=m;j++){
        if((i+j)%2==0){
          cout<<"1";
        }
        else{
          cout<<"2";
        }
      }
      cout<<endl;
     }*/

    /* for(int i=n;i>=1;i--){
      for(int j=1;j<=i;j++){
        cout<<j;
      }
      cout<<endl;
     }*/

    /* for(int i=1;i<=n;i++){
      for(int j=1;j<=(n-i);j++){
        cout<<" ";
      }
      for(int k=1;k<=(2*i-1);k++){
        cout<<k;
      }
      cout<<endl;
     }*/
     
     for(int i=1;i<=n;i++){
      for(int j=1;j<=(n-i);j++){
        cout<<" ";
      }
      for(int j=1;j<=i;j++){
        cout<<j;
      }
      for(int j=(i-1);j>=1;j--){
        cout<<j;
      }
      cout<<endl;
     }


  return 0;


}