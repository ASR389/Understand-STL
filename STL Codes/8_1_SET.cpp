#include <bits/stdc++.h>
using namespace std;
void print(set<string> m)
{
    for (auto i : m)
    {
        cout << i << endl;
    }
}
int main()
{
    set<string> s;
    // set<set<int>> ss;

    s.insert("abc"); // log(n)
    s.insert("zef");
    s.insert("bhi");

    auto it = s.find("abc");

    if (it != s.end())
    {
        cout << "String is Present" << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }

    print(s);

    s.erase("abc");
    cout << endl;
    print(s);
}