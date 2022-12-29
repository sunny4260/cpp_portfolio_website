#include<bits/stdc++.h>
using namespace std;
void recursionOnArray(int *arr,int idx,int n){
    if(idx == n) return;

    cout<<arr[idx]<<endl;

    recursionOnArray(arr,idx+1,n);

}
int main(){
    int ans=5;
    int arr[]={2,3,1,54,3};
    recursionOnArray(arr,0,ans);

    return 0;
}