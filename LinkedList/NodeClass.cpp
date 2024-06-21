#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main()
{
    // 10 20 30 40 
    // Node a;
    // a.val=10;
    // Node b;
    // b.val=20;
    // Node c;
    // c.val=30;
    // Node d;
    // d.val=40;
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    cout<<&a<<endl;
    cout<<a.next<<endl;
    // orming  Linkedlist
    a.next=&b;
    b.next=&c;
    c.next=&d;
    c.next->val=80;
    cout<<(a.next)->val<<endl;
    cout<<d.val<<endl;
    cout<<((a.next)->next)->val<<endl;
    // d.next=NULL;

    // (a.next)->val== *(a.next).val

    Node temp=a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);
    }
}