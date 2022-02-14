#include<iostream>
#include<stack>
using namespace std;
int main(){
    //last in first out
    stack<string>pillar;
    pillar.push("mikey");
    pillar.push("kenchi");
    pillar.push("baji");
    //the one added on the last in stack will be printed
    cout<<"top element = "<<pillar.top()<<endl;
    cout<<"before pop size of stack = "<<pillar.size()<<endl;
    pillar.pop();
    cout<<"after pop size of stack = "<<pillar.size()<<endl;
}