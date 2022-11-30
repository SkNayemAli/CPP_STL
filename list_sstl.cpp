#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l;

    l.push_back(6);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);
    l.push_front(1);

    cout<<"After push: ";
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Erase form begin->"<<endl;
    l.erase(l.begin());
    cout<<endl<<"After erase: "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

     //cout<<endl<<"Element at 2nd index: "<<l.at(2)<<endl;
    
    cout<<endl<<"Empty or not: "<<l.empty()<<endl;

    cout<<endl<<"First element: "<<l.front()<<endl;
    cout<<"Last element: "<<l.back()<<endl;
    
    cout<<endl<<"Before pop: "<<endl;
    for (int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;

    l.pop_back();

    cout<<endl<<"After pop: "<<endl;
    for (int i:l)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<endl<<"Before clear size: "<<l.size()<<endl;
    l.clear();
    cout<<"After clear size: "<<l.size()<<endl;
    /*
     cout<<endl<<"After pop: ";
    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    */
}