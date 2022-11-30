#include<iostream>
#include<map>
using namespace std;

int main(){

    map<int,string>m;

    m[1]="Sk";
    m[3]="Ali";
    m[2]="Nayem";

    m.insert({0,"Mrs."});

    cout<<"Before erase: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<endl<<"3 is Present or not: "<<m.count(3)<<endl;

    m.erase(3);
    cout<<endl<<"After erase: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

}