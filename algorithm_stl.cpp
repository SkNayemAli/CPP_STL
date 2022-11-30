#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    vector<int>v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    //Binary search........
    cout<<"Finding 6-> "<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<endl<<"Lower bound: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper bound: "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a=3;
    int b=5;

    cout<<endl<<"Max-> "<<max(a,b)<<endl;
    cout<<"Min-> "<<min(a,b)<<endl;

    swap(a,b);
    cout<<endl<<"After swapped value of a-> "<<a<<endl;

    string abcde="abcde";
    reverse(abcde.begin(),abcde.end());
    cout<<endl<<"String: "<<abcde<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<endl<<"After rotate "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    /*sort(v.begin());
    cout<<endl<<"After rotate "<<endl;
    for(int i:v){
        cout<<i<<" ";
    */

}