#include<bits/stdc++.h>
using namespace std;

void push(queue<int>&q,int x){
  q.push(x);
  int s=q.size();

  for(int i=1;i<s;i++){
    q.push(q.front());
    q.pop();

  }
}


queue<int> m1(){
  queue<int> q;
  push(q,1);
  push(q,2);
  push(q,3);
  push(q,4);
  return q;
  
  
 
}





int main(){
  queue<int> q1=m1();
  while(!q1.empty()){
    cout<<q1.front()<<" ";
    q1.pop();
  }
  

}