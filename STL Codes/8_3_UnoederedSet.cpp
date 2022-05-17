#include <bits/stdc++.h>
using namespace std;
void print(unordered_set<string> s)
{
    for (auto i : s)
    {
        cout << i << endl;
    }
}
int main()
{
    unordered_set<string> s;
    // set<set<int>> ss;

    s.insert("abc"); // log(1)
    s.insert("zef");
    s.insert("bhi");

    auto it = s.find("abc"); //O(1)

    if (it != s.end())
    {
        cout << "String is Present" << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }

    print(s);

    // s.erase("abc");
    cout << endl;
    print(s);
}