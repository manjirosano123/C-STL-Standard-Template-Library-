#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>deck2(5 , 10);
    for(int i : deck2){
        cout<<i<<" ";
    }
    cout<<endl;
    deque<int>deck3(deck2);
    for(int i : deck2){
        cout<<i<<" ";
    }
    cout<<endl;
    deque<int>deck1;
    cout<<"push_back pushes elements from last"<<endl;
    deck1.push_back(6);
    deck1.push_back(5);
    deck1.push_back(4);
    cout<<"push_front pushes elements from start"<<endl;
    deck1.push_front(1);
    deck1.push_front(2);
    deck1.push_front(3);
    cout<<"printing deque "<<endl;
    for(int i : deck1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"random access from indexing "<<endl;
    for (int i = 0; i < deck1.size(); i++)
    {
        cout<<deck1.at(i)<<" ";
    }
    cout<<endl;
    cout<<"before pop "<<endl;
    for(int i : deck1){
        cout<<i<<" ";
    }
    cout<<endl;
    deck1.pop_back();//removes elements from last;
    deck1.pop_front();//removes elemets from first;
    cout<<"after pop "<<endl;
    for(int i : deck1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"prints the first element "<<deck1.front()<<endl;
    cout<<"prints the last element "<<deck1.back()<<endl;
    cout<<"prints its empty or not "<<deck1.empty()<<endl;
    cout<<"before erasing "<<deck1.size()<<endl;
    deck1.erase(deck1.begin(),deck1.begin() + 1);//put the range 
    cout<<"after erasing "<<deck1.size()<<endl;
    for(int i : deck1){
        cout<<i<<" ";
    }
    cout<<endl;
}