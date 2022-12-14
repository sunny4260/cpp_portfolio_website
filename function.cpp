#include<bits/stdc++.h>
using namespace std;

/*int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}*/
void decrease(int n1,int n2){
    n1--;
    n2=n2-2;
    cout<<(n1)<<":"<<(n2)<<endl;;
}


int main()
{
    /*int a=13113413;
    int b=87827786;

    cout<<add(a,b)<<endl;

    cout<<pow(2,3)<<endl;
    cout<<sqrt(24)<<endl;*/

    int p=26;
    int q=13;
    decrease(p,q);
    cout<<(p)<<":"<<(q);
    

    
    return 0;
}