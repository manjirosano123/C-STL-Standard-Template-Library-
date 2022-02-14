#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>inosuke;
    inosuke.push_back(1);
    inosuke.push_front(2);
    inosuke.push_back(0);
    cout<<"before erase "<<endl;
    for( int i : inosuke){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"after erase "<<endl;
    inosuke.erase(inosuke.begin());
    for( int i : inosuke){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size of the list "<<inosuke.size()<<endl;
    //push_back also works on list
    //push_front also works on list
    cout<<"shows the first elements "<<inosuke.front()<<endl;
    cout<<"shows the last elements "<<inosuke.back()<<endl;
    cout<<"to copy our list to another list "<<endl;
    list<int>cutie(inosuke);
    for(int i : cutie){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"to show the all elements same all over the size "<<endl;
    list<int>handsome(5 , 100);
    for(int i : handsome){
        cout<<i<<" ";
    }
}