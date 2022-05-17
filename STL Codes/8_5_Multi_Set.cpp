#include <bits/stdc++.h>
using namespace std;
void print(multiset<string> s)
{
    for (auto i : s)
    {
        cout << i << endl;
    }
}
int main()
{
    multiset<string> s;
    // set<set<int>> ss;

    s.insert("abc"); // log(1)
    s.insert("zef");
    s.insert("bhi");
    s.insert("abc");
    s.insert("abc");

    auto it = s.find("abc"); // O(1)

    if (it != s.end())
    {
        cout << "String is Present" << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }

    print(s);
cout<<"it will delete only one 'abc' "<<endl;

    auto itr = s.find("abc"); // 0(log(n))
    if (itr != s.end())
    {
        s.erase(it);
        print(s);
    }

    cout<<"it will delete only all 'abc' "<<endl;
    s.erase("abc");
    cout << endl;
    print(s);
}