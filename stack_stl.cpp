#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string>s;


    s.push("RINI");
    s.push("NAYEM");
    s.push("NAJIM");

    cout<<"Top element-> "<<s.top()<<endl;

    cout<<endl<<"After pop-> "<<endl;
    s.pop();
    cout<<endl<<"Top element-> "<<s.top()<<endl;

    cout<<"Size of stack: "<<s.size()<<endl;

    cout<<endl<<"Empty or not: "<<s.empty()<<endl;

}