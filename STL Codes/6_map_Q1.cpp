#include <bits/stdc++.h>
using namespace std;
void print(map<string, int> m)
{
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}
int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s] = m[s] + 1;
        // m[s]++;
    }

    print(m);
}