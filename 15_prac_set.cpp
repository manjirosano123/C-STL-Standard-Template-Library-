#include<iostream>
#include<set>
using namespace std;
int main(){
    cout<<"set contains only unique elements "<<endl;
    cout<<"set only can insertion and deletion "<<endl;
    cout<<"elements comes in a sorted order "<<endl;
    cout<<"we can insert elements using insert operation "<<endl;
    set<int>box;
    //time com of insertion is big O(log n) 
    box.insert(2);
    box.insert(0);
    box.insert(1);
    box.insert(3);
    box.insert(3);
    box.insert(4);
    box.insert(0);
    for(auto i : box){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"before erase size "<<box.size()<<endl;
    set<int>::iterator it = box.begin();
    it++;
    it++;
    box.erase(it);
    cout<<"after erase size "<<box.size()<<endl;
    for(auto i : box){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"tells us if elements is present of not "<<box.count(3)<<endl;
    cout<<"tells us if elements is present of not "<<box.count(-3)<<endl;
    cout<<"returns the iterator of the elemets if element is present "<<endl;
    set<int>::iterator itr = box.find(1);
    cout<<"value present at itr "<<*it<<endl;
    for(auto i = itr ; i != box.end() ; i++){
        cout<<*i<<" ";
    }
    cout<<endl;
}   
