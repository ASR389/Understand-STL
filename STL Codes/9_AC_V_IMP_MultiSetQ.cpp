#include <bits/stdc++.h>
using namespace std;

int main()
{ // submitted on hacker earth
    int num;
    cin >> num;

    while (num--)
    {
        int n;
        int k;
        cin >> n >> k;

        multiset<long long> s;

        for (int i = 0; i < n; i++)
        {
            long long candy;
            cin >> candy;
            s.insert(candy);
        }
        long long output = 0;
        for (int i = 0; i < k; i++)
        {
            auto it = (--s.end());
            long long value = *it;
            // cout<<value;
            output += value;
            s.erase(it);
            s.insert(value / 2);
        }
        cout << output << endl;
    }
}