#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > createSprialMatrix(int n){
    vector<vector<int> > matrix(n,vector<int> (n));
    int left=0;
    int right=n-1;
    int top=0;
    int bottom=n-1;

    int diraction=0;
    int value=1;

    while (left<=right && top<=bottom)
    {
        if(diraction==0){
            for(int i=left;i<=right;i++){
                matrix[top][i]=value++;
            }
            top++;
        }
        if(diraction==1){
            for(int j=top;j<=bottom;j++){
                matrix[right][j]=value++;
            }
            right--;
        }
        if(diraction==2){
            for(int i=right;i>=left;i--){
                matrix[bottom][i]=value++;
            }
            bottom--;
        }
        else{
            for(int j=bottom;j>=top;j--){
                matrix[left][j]=value++;
            }
            left++;
        }
        diraction = (diraction+1)%4;
    }
    
}
int main(){
    int n;
    cin>>n;

    vector<vector<int> > matrix(n,vector<int> (n));
    matrix = createSprialMatrix(n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}