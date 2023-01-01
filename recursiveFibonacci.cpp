#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){

    int fib=fibonacci(5);
    cout<<fib<<endl;

    return 0;
}