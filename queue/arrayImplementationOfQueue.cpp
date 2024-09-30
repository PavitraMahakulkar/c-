#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Queue{
public:
    int f;
    int b;
    //int arr[5];
    vector<int> arr;
    Queue(int val){
        f=0;
        b=0;
        vector<int> v(val);
        arr=v;
    }
    void push(int val){
        if(b==arr.size()){
            cout<<"Queue is Full!"<<endl;
            return;
        }
        arr[b]=val;
        b++;
    }
    void pop(){
        if(f-b==0){
            cout<<"Queue is empty!";
            return;
        }
        f++;
    }
    int front(){
        if(f-b==0){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(f-b==0){
            cout<<"Queue is Empty!"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return b-f;
    }
    bool empty(){
        if(f-b==0) return true;
        else return false;
    }void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main()
{
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    q.push(40);
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();
}