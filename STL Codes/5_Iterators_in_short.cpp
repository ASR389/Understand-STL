#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<pair<int, int>> v_p = {{1, 2}, {3, 4}, {5, 6}};
    for (auto value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }
}