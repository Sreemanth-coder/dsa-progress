#include <iostream>
#include <bits/stdc++.h>
using namespace std;

///Basic hashing implementation/using
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    int arr[n];
    cout<<"enter:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    int q;
    cout<<"enter:";
    cin>>q;
    while(q--){
        int number;
         cout<<"enter:";
        cin>>number;
       
        //fetch
        cout<<hash[number]<<endl;


    }
    return 0;

}