#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
      this->data=data;
      this->next=nullptr;
    }
};


void insertAthead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertAttail(Node* &tail,int data){
    Node* temp= new Node(data);
    tail->next=temp;
    tail=temp;
}
void print(Node* &head){
    Node*temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtPosition(Node* &head, Node* &tail,int data,int pos){
   
    Node*temp=head;
    int cnt=1;
    if(pos==1){
        insertAthead(head,data);
        return;
    }
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAttail(tail,data);
        return;
    }
    Node* nodetoinsert= new Node(data);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
Node* deleteHead(Node*&head){
    Node*temp=head;
    head=head->next;
    delete temp;
    return head;

}
Node* deleteTail(Node*&head,Node*&tail){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node*temp=head;
    while(temp->next->next != NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    delete(tail);
    tail=temp;
    return head;
}
Node* deleteposition(Node*&head,int k){
    if(head==NULL) return NULL;
    if(k==1){
        deleteHead(head);
        return head;
    }
    int cnt=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            delete(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
Node* deletevalue(Node*&head,int ele){
    if(head==NULL) return NULL;
    if(head->data==ele){
        deleteHead(head);
        return head;
    }
    
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
        
        if(temp->data==ele){
            prev->next=prev->next->next;
            delete(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
bool Search(Node* &head,int ele){
    //liner Search
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==ele){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
Node* Middle(Node*head){
    Node*temp=head;
    int cnt=0;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    cout<<cnt<<endl;
    int n=cnt/2 + 1;
    int i=1;
    while(i<n){
        head=head->next;
        i++;
    }
    return head;
}
int main(){
    Node*n1=new Node(2);
    //cout<<n1;

    Node* head=n1;
    Node* tail=n1;
    insertAthead(head,1);
   //cout<<head->data<<endl;
    insertAttail(tail,4);
    //cout<<tail->data;
    insertAtPosition(head,tail,3,3);
    insertAttail(tail,5);
    //deleteHead(head);
   // deleteTail(head,tail);
   deleteposition(head,5);
   //deletevalue(head,3);
   //Middle(head);
    print(head);
    cout<<tail->data;
    //cout<<Search(head,7);
    
}          