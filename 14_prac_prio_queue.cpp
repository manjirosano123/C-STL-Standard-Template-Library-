#include<iostream>
#include<queue>
using namespace std;
int main(){
    cout<<"if the heap is high max comes out "<<endl;
    cout<<"if the heap is low min comes out "<<endl;
    priority_queue<int>maxi;
    priority_queue<int , vector<int> , greater<int>> mini;
    maxi.push(3);
    maxi.push(2);
    maxi.push(1);
    maxi.push(4);
    maxi.push(0);
    cout<<"prints elements in descending order"<<endl;
    int n = maxi.size();
    for(int i = 0; i < n ; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(3);
    mini.push(2);
    mini.push(1);
    mini.push(4);
    mini.push(0);
    cout<<"prints elements in ascending order"<<endl;
    int m = mini.size();
    for(int i = 0; i < m ; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<"is priority queue is empty or not "<<maxi.empty()<<endl;
    cout<<"is priority queue is empty or not "<<mini.empty()<<endl;
}