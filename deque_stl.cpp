#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d;

    d.push_back(6);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);
    d.push_front(5);
    d.push_front(1);

    cout<<"After push: ";
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;


     cout<<endl<<"Element at 2nd index: "<<d.at(2)<<endl;
    
    cout<<endl<<"Empty or not: "<<d.empty()<<endl;

    cout<<endl<<"First element: "<<d.front()<<endl;
    cout<<"Last element: "<<d.back()<<endl;
    
    cout<<endl<<"Before pop: "<<endl;
    for (int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();

    cout<<endl<<"After pop: "<<endl;
    for (int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<endl<<"Before clear size: "<<d.size()<<endl;
    d.clear();
    cout<<"After clear size: "<<d.size()<<endl;
    /*
     cout<<endl<<"After pop: ";
    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    */
}