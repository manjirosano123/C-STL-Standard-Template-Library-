#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>muzan;
    //                 size  initilize with this index example 1
    vector<int>kokushibo(5 , 1);
    for (int i = 0; i < kokushibo.size(); i++)
    {
        cout<<kokushibo.at(i)<<" ";
    }
    cout<<endl;
    cout<<"we can copy vector from another"<<endl;
    vector<int>douma(kokushibo);
    for (int i = 0; i < douma.size(); i++)
    {
        cout<<douma.at(i)<<" ";
    }
    cout<<endl;
    //capacity tell u about capacity of storage
    cout<<muzan.capacity()<<endl;
    //push that element toward vector
    muzan.push_back(3);
    cout<<muzan.capacity()<<endl;
    muzan.push_back(4);
    cout<<muzan.capacity()<<endl;
    muzan.push_back(5);
    cout<<muzan.capacity()<<endl;
    muzan.push_back(6);
    cout<<muzan.capacity()<<endl;
    muzan.push_back(7);
    cout<<muzan.capacity()<<endl;
    //tells u the size of the vector
    cout<<muzan.size()<<endl;
    //tell u which element is at index 
    cout<<muzan.at(0)<<endl;
    cout<<"shows first element "<<muzan.front()<<endl;
    cout<<"shows last element "<<muzan.back()<<endl;
    //removes last element of the vector
    cout<<"before pop"<<endl;
    for (int i = 0; i < muzan.size(); i++)
    {
        cout<<i<<" ";
    }
    muzan.pop_back();
    cout<<endl;
    cout<<"after pop"<<endl;
    for (int i = 0; i < muzan.size(); i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"before clear "<<muzan.size()<<endl;
    muzan.clear();
    cout<<"after clear "<<muzan.size()<<endl;
    cout<<"capacity "<<muzan.capacity()<<endl; 
}