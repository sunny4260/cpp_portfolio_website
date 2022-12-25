#include<bits/stdc++.h>
using namespace std;
// Q1;

// void runningSum(vector<int> &v){
//     for(int i=1;i<v.size();i++){
//         v[i]+=v[i-1];
//     }
//     return ;
//}

   // Q2;

    // bool checkprefixsuffixsum(vector<int> &v){
    //     int totalsum=0;
    //     for(int i=0;i<v.size();i++){
    //         totalsum+=v[i];
    //     }
    //     int prefix_sum=0;
    //     for(int i=0;i<v.size();i++){
    //         prefix_sum+=v[i];
    //         int suffix_sum = totalsum - prefix_sum; 

    //         if(suffix_sum == prefix_sum){
    //             return true;
    //         }
            
    //     }
    //     return false;
    // }
int main()
{
    // Q1;

    // int n;
    // cin>>n;

    // vector<int>v;
    // for(int i=0;i<n;i++){
    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);

    // }
    // runningSum(v);

    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";

    // }
    // cout<<endl;

    // Q2;

    // int n;
    // cin>>n;
    // vector<int> v;

    // for(int i=0;i<n;i++){
    //     int ele;
    //     cin>>ele;
    //     v.push_back(ele);
    // }
    // cout<<checkprefixsuffixsum(v)<<endl;

    // Q3;

    int n;
    cin>>n;

    vector<int>v(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        v[i]+=v[i-1];
    }

    int q;
    cin>>q;
    while (q--)
    {
        int l,r;
        cin>>l>>r;

        int ans=0;
        ans = v[r]-v[l-1];
        cout<<ans<<endl;
    }
    

    return 0;
}