#include<bits/stdc++.h>
using namespace std;
int sumOfValue(int *arr,int idx,int n){
    if(idx==n-1) return arr[idx];

    return arr[idx] + sumOfValue(arr,idx+1,n);

}
int main(){
   int arr[]={2,3,5,6,20};
   int n=5;
   cout<<sumOfValue(arr,0,n);
    return 0;
}