#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class MinHeap{
public:
    // int arr[50];
    vector<int> arr;
    int idx;
    // MinHeap(){
    //     idx=1;
    // }
    MinHeap(int x){
        idx=1;
        for(int i=1;i<=25;i++){
            arr.push_back(0);
        }
    }
    int top(){
        return arr[1];
    }
    void push(int x){
        arr[idx]=x;
        int i=idx;
        idx++;
        // swapping of i with parent i/2
        while(i!=1){
            int parent=i;
            if(arr[i]<arr[parent]){
                swap(arr[i],arr[parent]);
            }
            else break;
        }
    }
    int size(){
        return idx-1;
    }
    void pop(){
        idx--;
        arr[1]=arr[idx];
        // rearrangement
        int i=1;
        while(true){
            int l=2*i, r=2*i+1;
            if(l>idx-1) break;
            if(r>idx-1){
                if(arr[i]>arr[l]){
                    swap(arr[i],arr[l]);
                    i=l;
                }
                break;
            }
            if(arr[l]<arr[r]){
                if(arr[i]>arr[l]){
                    swap(arr[i],arr[l]);
                    i=l;
                }
                else break;
            }
            else{
                if(arr[i]>arr[r]){
                    swap(arr[i],arr[r]);
                    i=r;
                }
                else break;
            }
        }
    }
    void display(){
        for(int i=1;i<=idx-1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    // MinHeap pq();
    MinHeap pq(25);
    pq.push(10);
    pq.push(20);
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    pq.push(11); 
    pq.push(2);
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.display();
    pq.pop();
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.display();
}