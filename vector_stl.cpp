#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    cout<<endl<<"Size-> "<<v.size()<<endl;

    cout<<endl<<"Element at 2nd index: "<<v.at(2)<<endl;
    
    cout<<endl<<"Empty or not: "<<v.empty()<<endl;

    cout<<endl<<"First element: "<<v.front()<<endl;
    cout<<"Last element: "<<v.back()<<endl;
    
    cout<<endl<<"Before pop: "<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<endl<<"After pop: "<<endl;
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear size: "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size: "<<v.size()<<endl;
    
}