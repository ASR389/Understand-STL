#include <bits/stdc++.h>
using namespace std;
void print(unordered_map<string, int> m)
{
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}
int main()
{
    unordered_map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s] = m[s] + 1;
        // m[s]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        cout << m[s] << endl;
    }

    // print(m);
}