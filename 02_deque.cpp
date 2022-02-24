#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>tanjiro;
    //pushing element to last and front positions
    tanjiro.push_back(1);
    tanjiro.push_front(2);
    tanjiro.push_back(0);
    tanjiro.push_back(-1);
    cout<<"before pop back"<<endl;
    for (int i = 0; i < tanjiro.size(); i++)
    {
        cout<<tanjiro.at(i)<<" ";
    }
    cout<<endl;
    cout<<"after pop back"<<endl;
    //removes elements from last
    //pop back removes from last andpop front removes from first
    //tanjiro.pop_back();
    //tanjiro.pop_front();
    for (int i = 0; i < tanjiro.size(); i++)
    {
        cout<<tanjiro.at(i)<<" ";
    }
    cout<<endl;
    cout<<" printing deque elements "<<tanjiro.at(0)<<endl; 
    cout<<"shows first element "<<tanjiro.front()<<endl;
    cout<<"shows last element "<<tanjiro.back()<<endl;
    cout<<"before erase size of deque "<<tanjiro.size()<<endl;
    tanjiro.erase(tanjiro.begin());
    cout<<"after erase size of deque "<<tanjiro.size()<<endl;
    for (int i = 0; i < tanjiro.size(); i++)
    {
        cout<<tanjiro.at(i)<<" ";
    }
    cout<<endl;
    tanjiro.erase(tanjiro.begin(), tanjiro.end() - 2);
    for (int i = 0; i < tanjiro.size(); i++)
    {
        cout<<tanjiro.at(i)<<" ";
    }
    cout<<endl;
    cout<<tanjiro.size()<<endl;
}