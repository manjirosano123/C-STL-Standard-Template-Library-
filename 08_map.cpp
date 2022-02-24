#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int , string> m;
    m[1] = "mikey";
    m[13] = "kenchi";
    m[2] = "baji";
    m.insert({ 5 , "chifuyu"});
    //first print the value and second print the keys;
    cout<<"before erase"<<endl;
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Is 4 is present "<<m.count(4)<<endl;
    m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it = m.find(5);
    for (auto i = it; it != m.end(); it++)
    {
        cout<<(*it).first<<" ";
    }
}   
