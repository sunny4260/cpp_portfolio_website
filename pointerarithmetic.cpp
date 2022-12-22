#include<bits/stdc++.h>
using namespace std;
int main(){
     int x=5;
     long long y=96853;

     int *ptrx=&x;
     long long *ptry=&y;

     cout<<"size of x : "<<sizeof(x)<<endl;
     cout<<"size of y : "<<sizeof(y)<<endl;


     cout<<ptrx<<" "<<(ptrx + 1)<<endl;
     cout<<ptry<<" "<<(ptry + 1)<<endl;
    return 0;
}
