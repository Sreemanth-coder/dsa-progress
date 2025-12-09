#include <iostream>
#include <cmath>
using namespace std;

void Recursion (int x){

        
        if(x>0){
        cout<<"sree"<<x<<endl;
        x-=1;
        Recursion(x);
        }
}

void Recursion2(int n,int N){
   
    if(n>0){
        
        cout<<N<<" ";
        N+=1;
        n-=1;
        Recursion2(n,N);
    }
}

long long  Recursion3(long long  x){

        return double  (pow(x,3))+Recursion3(x-1);
}
int main(){
    int input;
    cout<<"ENter:";
    cin>>input;
    //Recursion(input);
    //Recursion2(input,1);
   cout<<Recursion3(input);
    return 0;
}