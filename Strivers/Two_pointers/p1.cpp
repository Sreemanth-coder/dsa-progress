#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    /*
    int n=5;
    int *p=&n;
    cout<<p<<" "<<*p<<" "<<&n<<endl;
    cout<<sizeof(n)<<" "<<sizeof(p);
    */
   int n=6;
   int *ptr=0;
   ptr=&n;
   //copying a pointer
   int num=8;
   int a=num;
   
   cout<<a<<"  ";
   a++;
   cout<<a<<endl;

    int *p=&num;
    cout<<*p<<" ";
    (*p)++;
    cout<<*p<<endl;

    int *q=p;
    cout<<*q;
    

}