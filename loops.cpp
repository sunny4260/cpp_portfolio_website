#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*int i=1;
    while(i<5){
        cout<<i<<endl;
        i++;
    }*/

    //while loop.

    /*int n;
    cin>>n;

    int sum=0;
    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<sum<<endl;*/

    /*int n;
    cin>>n;
    
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
*/

   /* int i=5;
    while(true){
        if(i%7==0){
            cout<<i<<endl;
            break;
        }
        i+=5;
    }
     for(int i=5;;i+=5){
        if(i%7==0){
            cout<<i<<endl;
            break;
        }
     }*/
    /* int n;
     cin>>n;
     int sum=0;
     do{
        int num;
        cin>>num ;
        sum+=num;
        n--;
     }while(n>0);

     cout<<sum<<endl;*/
     for(int i=1;i<50;i++){
        if(i%4==0){
            continue;
        }
        cout<<i<<endl;
     }
    return 0;
   
}