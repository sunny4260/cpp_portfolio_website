#include<bits/stdc++.h>
using namespace std;
int main()
{

   // Q1 binary to decimal:

   /* int n;
    cin>>n;

    int ans=0;
    int power=1;
    while (n>0)
    {
        int lastdigits = n%10;
        ans += lastdigits*power;
        power*=2;
        n/=10;
    }
    cout<<ans<<endl; */

    // Q2 decimal to binary:
     
     int n;
     cin>>n;

     int ans=0;
     int power=1;
     while (n>0)
     {
        int paritydigits=n%2;
        ans += paritydigits*power;
        power*=10;
        n/=2;
     }

     cout<<ans<<endl;
     
    


    


    return 0;

}