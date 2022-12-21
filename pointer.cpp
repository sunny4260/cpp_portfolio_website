#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=9;
    float y=3.9;

    int *ptr=&x;
    cout<<ptr<<endl;

    float *ptr1=&y;
    cout<<*ptr1<<endl;

    *ptr=50;
    cout<<"new value of x "<<x<<endl;
    cout<<"update the new value of ptr "<<*ptr<<endl;

    int value=*ptr;
    cout<<value<<endl;
    
    return 0;
}