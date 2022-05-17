#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, string> m;
    m[1] = "Ajay"; // O(1)
    m[5] = "Priyanshu";
    m[2] = "Rajat";

    m.insert({3,"Anurag"});  //O(1)

//print
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    cout<<"Size of Map is: "<<m.size()<<endl;

//FIND
    auto ite = m.find(3); // O(1)
    if(ite == m.end()){
        cout << "No Value";
    }
    else{
        cout<<ite->first<<" "<<ite->second<<endl;
    }
//ERASE
    m.erase(ite); //O(1)

//CLEAR
m.clear();

cout<<"After clear map size: "<<m.size()<<endl;
}