#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"initializing with 2 adn all over the vector size 10 "<<endl;
    vector<int>vec2(10 , 2);
    for(int i : vec2){
        cout<<i<<" "; 
    }
    cout<<endl;
    cout<<"copying vector to another vector "<<endl;
    vector<int>vec3(vec2);
    for(int i : vec3){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int>vec;
    cout<<"push pushes the element from back(last) "<<endl;
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(0);
    vec.push_back(4);
    cout<<"vector printing "<<endl;
    for(int i : vec){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"vector printing with indexing "<<endl;
    for(int i = 0 ; i < vec.size() ; i++){
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;
    cout<<"capacity of vector "<<vec.capacity()<<endl;
    cout<<"No. of elements presents in vector "<<vec.size()<<endl;
    cout<<"Gives the index of the element "<<vec.at(0)<<endl;
    cout<<"gives first elements "<<vec.front()<<endl;
    cout<<"gives last elements "<<vec.back()<<endl;
    cout<<"before pop "<<endl;
    for(int i = 0 ; i < vec.size() ; i++){
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;
    vec.pop_back();
    cout<<"after pop "<<endl;
    for(int i = 0 ; i < vec.size() ; i++){
        cout<<vec.at(i)<<" ";
    }
    cout<<endl;
    vec.clear();//size becomes zero but capacity remains same dynamic
    cout<<"size becomes zero but capacity remains same (dynamic) after clear opration "<<endl;
    cout<<vec.capacity()<<endl;
    cout<<vec.size()<<endl;
}
