#include<iostream>
#include<stack>
using namespace std;
int main(){
    cout<<"last in first out "<<endl;
    stack<string>block1;
    cout<<"pushes stack elements "<<endl;
    block1.push("c++");
    block1.push("java");
    block1.push("pyhton");
    cout<<"shows last stack element "<<block1.top()<<endl;
    cout<<"removes last stack element "<<endl;
    cout<<"before pop size "<<block1.size()<<endl;
    block1.pop();
    cout<<"after pop size "<<block1.size()<<endl;
    cout<<"after poping last elements is "<<block1.top()<<endl;
    cout<<"stack is emprty or not "<<block1.empty()<<endl;
}