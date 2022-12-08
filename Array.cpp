#include<bits/stdc++.h>
using namespace std;
int main()
{
   /* int arr[]={4,3,6,7,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0;

    for(int i=0;i<size;i++){
        sum+=arr[i];

    }
    cout<<sum<<endl;*/

   /* int arr[]={2,33,44,32,53};
    int max=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<endl;*/

    // linear search

    int arr[]={2,33,22,7,6};
    int key=55;

    int ans=-1;
    for(int i=0;i<5;i++){
        if(arr[i]==key){
            ans=i;
        }


    }
    cout<<ans<<endl;



    return 0;
}