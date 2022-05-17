#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string si;
        cin >> si;
        s.insert(si);
    }

    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(s.find(str)==s.end()){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
   
}