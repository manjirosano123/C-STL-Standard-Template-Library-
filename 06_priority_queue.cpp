#include<iostream>
#include<queue>
using namespace std;
int main(){
    //priority queue depends on heap if we max the heap
    //then the max element will come out
    //if we min the heap then the min element will come out
    priority_queue<int>maxi;//max heap
    priority_queue<int,vector<int>,greater<int>> mini;//min heap
    maxi.push(4);
    maxi.push(1);
    maxi.push(6);
    maxi.push(9);
    maxi.push(3);
    cout<<"size of the pq = "<<maxi.size()<<endl;
    cout<<"descending order "<<endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(4);
    mini.push(1);
    mini.push(6);
    mini.push(9);
    mini.push(3);
    int m = mini.size();
    cout<<"ascending order "<<endl;
    for (int i = 0; i < n; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
}