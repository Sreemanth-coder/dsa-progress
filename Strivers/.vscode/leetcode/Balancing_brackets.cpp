#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
][][
]]][[[
[]
[[][]]
*/
int min_swap(string s1){
    int n=s1.length();
    int max=0;
    //balanced
    if(s1[0]=='[' && s1[n-1]==']'){
        if(n>2){
        for(int i=1;i<n-2;i++){
            if( s1[i]=='[' && s1[i+1]==']'){
                i++;
            }
        }
        }
    
        return max;

    }
    //swapping
    else{
        swap(s1[0],s1[n-1]);
        max++;
        for(int i=1;i<n-2;i++){
            if( s1[i]=='[' && s1[i+1]==']'){
                i++;
            }
            else{
                swap(s1[i],s1[n-1-i]);
                max++;
            }
        }
        return max;
        
    }
}


int main(){
    string s="]]][[[";
    int result=min_swap(s);
    cout<<result;
    

}
