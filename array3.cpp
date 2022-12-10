#include<bits/stdc++.h>
using namespace std;
// second largest Q4.1;
/*int largestElementIndex(int arr[],int size){

    int max=INT_MIN;
    int maxindex=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            maxindex=i;
        }
    }
    return maxindex;
}*/
// second largest Q4.2;
/*int secondlargestelement(int arr[],int size){
    int max=INT_MIN;
    int second_max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    for(int i=0;i<size;i++){
        if(arr[i]>second_max && arr[i]!=max){
            second_max=arr[i];
        }
    }
    return second_max;
}*/
int main()
{
    //  pairs Targetsum Q1;

   /* int arr[]={3,4,6,7,1};
    int targetsum=7;
    int size=5;
    int pairs=0;

    for(int i=0;i<size;i++){
        for(int j=i+1;i<size;j++){
            if(arr[i]+arr[j]==targetsum){
                pairs++;
            }
        }


    }
    cout<<pairs<<endl; */

    // Triplets targetsum Q2;

/*    int arr[]={3,1,2,4,0,6};
    int targetsum= 7 ;
    int size=6;
    int triplets=0;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==targetsum){
                 triplets++;
                }
            }
        }
    }
    cout<< triplets<<endl;
*/

// array mainpulation Q3;

/* int arr[]={3,2,1,2,3,4,4,6, 1};
int size=9;

for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]==arr[j]){
            arr[i]=arr[j]= -1;
        }
    }
}
for(int i=0;i<size;i++){
    if(arr[i]>0){
        cout<<arr[i]<<endl;
    }
}
*/

// Second largest element Q4.1;   

/*int arr[]={2,3,5,7,8,1};
int size=6;
int indexoflargest = largestElementIndex(arr,6);

arr[indexoflargest]=-1;
int indexsecondlargest = largestElementIndex(arr,6);
cout<<arr[indexsecondlargest]<<endl;

// Q4.2

int arr[]={2,3,5,7,8,1};
int size=6;

cout<<secondlargestelement(arr,size)<<endl;  
*/


// rotate Q5.1;
/*int arr[]={1,2,3,4,5};
 int n=5; 
 int k=2;

 k=k%n;

 int ansarr[5];
 int j=0;
 for(int i=n-k;i<n;i++){
    ansarr[j++]=arr[i];
 }

 for(int i=0;i<=k;i++){
    ansarr[j++]=arr[i];
 }

 for(int i=0;i<n;i++){
    cout<<ansarr[i]<<" ";
 }
 cout<<endl; 

*/

// Q5.2;

/*vector<int> v;
 v.push_back(1);
 v.push_back(2);
 v.push_back(3);
 v.push_back(4);
 v.push_back(5);
 int k=2;

 k=k%v.size();
 reverse(v.begin(),v.end());
 reverse(v.begin(),v.begin()+k);
 reverse(v.begin()+k,v.end());

 for(int a:v){
    cout<<a<<" ";
 }
 cout<<endl;
*/
// Queries Q6;

 int n  ;
 cin>>n;

 vector<int> v(n);
 for(int i=0;i<n;i++){
    cin>>v[i];
 }
 const int N = 1e5 + 10;
 vector<int> freq(N,0);
 for(int i=0;i<n;i++){
    freq[v[i]]++;
 }
 cout<<"Enter queries: ";
 int q;
 cin>>q;

 while (q--)
 {
    int queryelement;
    cin>>queryelement;
    cout<<freq[queryelement]<<endl;
 }
 



    return 0; 
} 