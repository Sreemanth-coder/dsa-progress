#include<iostream>
#include<bits/stdc++.h>
#include <vector>

using namespace std;
void list_adt(){
    //list is same as vector but has a push front operation
    list<int> ls;
    ls.push_back(3);
    ls.emplace_back(4);
    ls.push_front(2);
    for(auto it=ls.begin();it!=ls.end();it++){
        cout<<*(it)<<" ";
    }


}
void dequeue_adt(){
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(3);
    dq.push_front(1);

    dq.pop_back();
    dq.pop_front();
    for(auto it=dq.begin();it!=dq.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<dq.back();

}
void stack_adt(){
    //Time complexity of any operation in the stack takes just O(1) time
    //LIFO-last in first out 
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top();
    st.pop();
    cout<<endl;
    cout<<st.top();

    //swap operation can be done
    stack<int>s2;
    s2.swap(st);

}

void Queue_adt(){
    //O(1)
    //FIFO(first in first out)
    queue<int> q;
    q.push(1);
    q.emplace(2);
    q.push(3);
    q.back()+=5;
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front ();

}
void Priority_queue(){
    //push and pop takes O(logn) and top takes O(1) complexity
        /*
    priority_queue<int> pq;
    pq.push(2);
    pq.push(4);
    pq.push(5);
    pq.push(3);
    
    cout<<pq.top()<<endl;//top points to the largest element
    pq.pop();
    cout<<pq.top();
   */

    //Minimun heap(priority queue with the min element at the top)
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(1);
    pq.push(2);
    cout<<pq.top();

    
}

void set_adt(){
    //Every operation happens in logn complexity(ordered set specifically)
    //takes everyhting in sorted order and takes only unque elements
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(3);
    //begin(),end(),size()
    if(st.find(2)!=st.end()){
        cout<<true;
    }
        //always returns the iterator
    
    st.erase(2);//deletes the number and maintains sorted order
    int cnt=st.count(1);// 1 or 0

    // Important : The find function in the set ds acts as linear search so use it well
    unordered_set<int> ust;
    //same operations that of set but takes O(1) at worst case O(N)
    

}

void map_adt(){
    //unique keys are used identify the values <key,value>
    map<int,int> mpp;
    map<pair<int,int>,int> mp1;

    //data is stored in sorted order of keys
    mpp[1]=2;//for key 1 store element 2
    mpp.insert({2,3});
    mpp.insert({3,4});
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<" ";
    }
    mp1[{1,3}]=10;//for key (1,3) store the value 10
    




}


int main(){
    //list_adt();
    //dequeue_adt();
    //stack_adt();
    //Queue_adt();
    //Priority_queue();
    set_adt();
    //map_adt();
    
    /*
    //pairs
    pair<int,int> p={1,3};
    //Nested pairs
    pair<int,pair<int,int>> p1={2,{2,3}};
    cout<<p1.first<<" "<<p1.second.second<<" "<<p1.second.first<<endl;
    //arr of pairs
        //here pair is treated as a datatype
    pair<int,int> arr[]={{1,2},{3,4}};
    cout<<arr[1].first<<" "<<arr[0].first<<endl;
    */

    //Containers

    //vectors
    /*
    //It is dynamic in nature
    vector<int> v;
    v.push_back(10);
    v.emplace_back(20);//Dynamically increases the size of the vector
    v.push_back(30);
    v.push_back(40);
    */
    /*
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> v1(5,100);//container with size 5 and all 100's
    //coping a container
    vector<int> v2(v1);
    */

    /*
    //iterators:They point to memory address
    vector<int>::iterator it=v.begin();
    cout<<*(it)<<" ";
    it=it+1;
    vector<int>::iterator it=v.end();//it points next to last elment(i.e empty space)
    cout<<*(it);
    */
    /*
    cout<<v[0]<<" "<<v.at(0)<<endl;//same
    cout<<v.back()<<" ";//pirnts last element
*/

    /*
    //looping through entire vector
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    //NOw by using auto :auto assignation of datatype;in this case auto is int
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    //or
    //Here it is not a iterator , baiackky it will be a variable
    for(auto it:v){
        cout<<it<<" ";
    }
    */
   
    /*
    //Deletion
    //v.erase(v.begin()+1);
    v.erase(v.begin()+1,v.begin()+3);//start and end
     for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
     }
        */

    /*
    //Insert Function
    vector<int> v1(2,100);//{100,100}
    v1.insert(v1.begin(),300);//{300,100,100}
    v1.insert(v1.begin()+1,2,200);
     //combining two vecotrs
    vector<int> copy(2,50);
    v1.insert(v1.begin(),copy.begin(),copy.end());
    for(auto it=v1.begin();it!=v1.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    */
   /* Properties of vectors
    cout<<v1.size()<<endl;//current size of the vector

    v.pop_back();//deletes the last element
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    //v1.swap(v);swaps the variables of the vectors

   // v.clear()//clear entire vector
   v.empty()//returns true if your vector is empty else false
    */

    
    


}
