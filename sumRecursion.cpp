#include<bits/stdc++.h>
using namespace std;
int sumOfRecursive(int n){
    if(n>=0 && n<=9) return n;

    return sumOfRecursive(n/10) + (n%10);

}
int main(){
    int sum=sumOfRecursive(1234);
    cout<<sum;

    return 0;
}