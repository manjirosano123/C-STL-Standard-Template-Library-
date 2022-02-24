#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>doc2(5 , 10);
    for(int i : doc2){
        cout<<i<<" ";
    }
    cout<<endl;
    list<int>doc3(doc2);
    for(int i : doc2){
        cout<<i<<" ";
    }
    cout<<endl;
    list<int>doc1;
    cout<<"pushes elements in list from last "<<endl;
    doc1.push_back(6);
    doc1.push_back(5);
    doc1.push_back(4);
    cout<<"pushes elements in list from start "<<endl;
    doc1.push_front(1);
    doc1.push_front(2);
    doc1.push_front(3);
    for(int i : doc1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"element present at first position "<<doc1.front()<<endl;
    cout<<"element present at last position "<<doc1.back()<<endl;
    cout<<"before erase "<<endl;
    for(int i : doc1){
        cout<<i<<" ";
    }
    cout<<endl;
    doc1.erase(doc1.begin());
    cout<<"after erase "<<endl;
    for(int i : doc1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"before pop size "<<doc1.size()<<endl;
    cout<<"removes elemet from first "<<endl;
    doc1.pop_front();
    cout<<"removes elemet from last "<<endl;
    doc1.pop_back();
    cout<<"after pop size "<<doc1.size()<<endl;
    for(int i : doc1){
        cout<<i<<" ";
    }
    cout<<endl;
}