#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>q;


    q.push("RINI");
    q.push("NAYEM");
    q.push("NAJIM");

    cout<<endl<<"Size before pop: "<<q.size()<<endl;
    cout<<"First element: "<<q.front()<<endl;
    q.pop();
    cout<<endl<<"After pop the first element: "<<q.front()<<endl;

    cout<<endl<<"Size after pop: "<<q.size()<<endl;
}