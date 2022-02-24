#include<iostream>
#include<set>
using namespace std;
int main(){
    // set contains only unique elements
    // cant be modify
    // comes out in sorted order
    // no repetations
    set<int>nezuke;
    nezuke.insert(6);
    nezuke.insert(1);
    nezuke.insert(5);
    nezuke.insert(3);
    nezuke.insert(2);
    nezuke.insert(2);
    nezuke.insert(5);//insert operation's time complexity is bog O of log n
    for(int i : nezuke){
        cout<<i<<" ";
    } 
    cout<<endl;
    set<int>::iterator it = nezuke.begin();
    it++;//erase the second element
    nezuke.erase(it);
    for(int i : nezuke){
        cout<<i<<" ";
    } 
    cout<<endl;
    cout<<"5 is present or not "<<nezuke.count(5)<<endl;// output in a boolean form(true or false)
    cout<<"-5 is present or not "<<nezuke.count(-5)<<endl;// output in a boolean form(true or false)
    set<int>::iterator itr = nezuke.find(5);
    cout<<"finding the iterator "<<*it<<endl;
    for (auto it = itr; it != nezuke.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}   
