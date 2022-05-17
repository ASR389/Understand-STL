#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Ajay";
    m[5] = "Priyanshu";
    m[2] = "Rajat";

    m.insert({3,"Anurag"});
// This map will print values in sorted order

    map<int, string> :: iterator it;
    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first <<" " << (*it).second<<endl;
    }

//Above printing iterator code in short.

    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    cout<<"Size of Map is: "<<m.size()<<endl;

//FIND
    auto ite = m.find(3);
    if(ite == m.end()){
        cout << "No Value";
    }
    else{
        cout<<ite->first<<" "<<ite->second<<endl;
    }
//ERASE
    m.erase(ite); //logn

//CLEAR
m.clear();

cout<<"After clear map size: "<<m.size()<<endl;
}