#include<bits/stdc++.h>
using namespace std;

void find(int n,int r){
    int result=1;
    for(int i=0;i<r-1;i++){
        result=result*(n-1-i);
        result=result/(i+1);
        
    }
    cout<<result;

}
void print_row(int n){
    int result=1;
    cout<<result<<" ";
    for(int i=0;i<n-1;i++){
        result=result*(n-1-i);
        result=result/(i+1);
        cout<<result<<" ";
    }

}
void optimal(int n){
    
}
void m1(int n){
    /*
    for(int i=0;i<n;i++){
        int val=1;
        for(int space=0;space<n-1-i;space++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<val<<" ";
            val=val*(i-j)/(j+1);
        }
        cout<<endl;
        
    }
        */

    vector<vector<int>> v(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        int val=1;
        for(int j=0;j<=i;j++){
            v[i][j]=val;
            val=val*(i-j)/(j+1);
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


}

int main(){
    int n=5;
    int row=4,col=4;
   // m1(n);
    //find(row,col);
    print_row(n);

}