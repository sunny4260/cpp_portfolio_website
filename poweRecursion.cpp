#include<bits/stdc++.h>
using namespace std;
int twoPowerNum(int p, int q){
    if(q==0) return 1;
    return twoPowerNum(p,q-1)*p;

}
int main(){
      int ans=twoPowerNum(2,3);
    cout<<ans<<endl;
    return 0;
}