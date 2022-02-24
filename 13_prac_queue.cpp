#include<iostream>
#include<queue>
using namespace std;
int main(){
    cout<<"first in first out "<<endl;
    queue<string>line1;
    line1.push("c++");
    line1.push("java");
    line1.push("python");
    cout<<"shows the the first element who entered in queue"<<endl;
    cout<<line1.front()<<endl;
    cout<<"removes the the first element who entered in queue"<<endl;
    cout<<"before poping "<<line1.size()<<endl;
    line1.pop();
    cout<<"after poping "<<line1.size()<<endl;
    cout<<"shows the the first element who entered in queue"<<endl;
    cout<<line1.front()<<endl;
}