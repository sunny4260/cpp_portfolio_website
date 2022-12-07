#include<bits/stdc++.h>
using namespace std;

// Q1;
 
// void sortZeroAndOnes(vector<int> &v){
//     // int zero_count=0;
//     // for(int ele:v){
//     //     if(ele==0){
//     //         zero_count++;
//     //     }
//     // }
//     // for(int i=0;i<v.size()  ;i++){
//     //     if(i<zero_count){
//     //         v[i]=0;
//     //     }else{
//     //         v[i]=1;
//     //     }
//     // }
//     int left_ptr=0;
//     int right_ptr=v.size()-1;

//     while(left_ptr<right_ptr){
//         if(v[left_ptr]==1 && v[right_ptr]==0){
//             v[left_ptr++]=0;
//             v[right_ptr--]=1;
//         }
//         if(v[left_ptr]==0){
//           left_ptr++;
//         }
//         if(v[right_ptr]==1){
//             right_ptr--;
//         }

//     }
//     return ;
// }
  
// Q2; 

    //    void sortByParity(vector<int> &v){
    //     int left_ptr=0;
    //     int right_ptr=v.size()-1;

    //     while (left_ptr<right_ptr)
    //     {
    //         if(v[left_ptr]%2==1 && v[right_ptr]%2==0){
    //             swap(v[left_ptr],v[right_ptr]);
    //             left_ptr++;
    //             right_ptr--;
    //         }
    //         if(v[left_ptr]%2==0){
    //             left_ptr++;
    //         }
    //         if(v[right_ptr]%2==1){
    //             right_ptr--;
    //         }
    //     }
    //     return ;
        

    //    }

    // Q3;

    void sortSquaredArray(vector<int> &v){
        vector<int> ans;
        int left_ptr=0;
        int right_ptr=v.size()-1;

        while (left_ptr<=right_ptr)
        {
            if(abs(v[left_ptr])<abs(v[right_ptr])){
                ans.push_back(v[right_ptr]*v[right_ptr]);
                right_ptr--;
            }
            else{
                ans.push_back(v[left_ptr]*v[left_ptr]);
                left_ptr++ ;
            }
        }
        for(int i=0;i<v.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
 
int main()
{
    // Q1;
//      int n;
//      cin>>n;

//      vector<int>v;
//       for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//       }
//       sortZeroAndOnes(v);

//       for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//       }
//       cout<<endl;

// Q2;
        //  int n;
        //  cin>>n;

        //  vector<int> v;
        //  for(int i=0;i<n;i++){
        //     int ele;
        //     cin>>ele;  
        //     v.push_back(ele);
        //  }
        //  sortByParity(v);

        //  for(int i=0;i<n;i++){
        //     cout<<v[i]<<" ";

        //  }
        //  cout<<endl;

        // Q3;

        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        sortSquaredArray(v);


    return 0;
}