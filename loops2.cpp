#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Q1:

   /* int n;
    cin>>n;
    int digits=0;
    while(n>0){
        digits++;
        n=n/10;
    }
    cout<<digits<<endl;*/

    // Q2:

  /*  int n;
    cin>>n;
    int sum=0;

    while (n>0)
    {
        int lastdigits = n%10;
        sum+=lastdigits;
        n=n/10;
        
    }
    cout<<sum<<endl;*/

    // Q3:

   /* int n;
    cin>>n;
    int reverse=0;
    while (n>0)
    {
        int lastdigits=n%10;
        reverse = reverse*10 + lastdigits;
        n/=10;
    }
    cout<<reverse<<endl;
    */
   
   // Q4:

  /* int n;
   cin>>n;
   int sum=0;
   for(int i=1;i<=n;i++){
    if(i%2==0){
        sum-=i;
    }
    else{
        sum+=i;
    }
    cout<<sum<<endl;
   }*/

   // Q5:

  /* int n;
   cin>>n;

   int fact=1;
   for(int i=1;i<=n;i++){
    fact*=i;
    cout<<fact<<endl;

   }
    */

   // try this :

   int a,b;
   cin>>a>>b;
   int result=1;
   for(int i=1;i<=a;i++){
    result*=a;
    cout<<result<<endl;
   }




    return 0;
}