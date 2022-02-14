#include<iostream>
#include<queue>
using namespace std;
int main(){
    //first in first out
    queue<string>line;
    line.push("mikey");
    line.push("kenchi");
    line.push("baji");
    cout<<"first element = "<<line.front()<<endl;
    cout<<"last elements = "<<line.back()<<endl;
    cout<<"before pop size is = "<<line.size()<<endl;
    line.pop();//pops out the first elements
    cout<<"after pop size is = "<<line.size()<<endl;
    cout<<"first element = "<<line.front()<<endl;
}