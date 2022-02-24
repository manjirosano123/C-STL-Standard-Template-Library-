#include<iostream>
#include<map>
using namespace std;
int main(){
    // time com of insert , erase , find , count big O(log n)
    cout<<"all keys are unique "<<endl;
    cout<<"one key can point to only one key or value "<<endl;
    cout<<"values can be point to same key"<<endl;
    cout<<"keys cant be point to same values can only pointing to unique value "<<endl;
    map<int ,string> dic;
    dic[1] = "c++";
    dic[3] = "c#";
    dic[2] = "java";
    dic[13] = "python";
    cout<<"this is how you print the map "<<endl;
    //sorted in map and random in unordered map
    //first return key and second returns value
    for(auto i : dic){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"how to insert key and values in map "<<endl;
    dic.insert({4 , "java script"});
    cout<<"before erase "<<dic.size()<<endl;
    for(auto i : dic){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"if elements is present or not "<<dic.count(2)<<endl;
    dic.erase(13);
    cout<<"after erase "<<dic.size()<<endl;
    for(auto i : dic){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"printing elemets from it "<<endl;
    auto it = dic.find(2);
    for(auto i = it ; i != dic.end() ; i++ ){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
}   
