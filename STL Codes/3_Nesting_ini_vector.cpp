#include <bits/stdc++.h>
using namespace std;

void printvec(vector<pair<int, int>> vp)
{
    cout << "Size: " << vp.size() << endl;
    for (int i = 0; i < vp.size(); i++)
    {
        cout << vp[i].first << " " << vp[i].second << endl;
    }
    //  cout<<endl;
}

int main()
{
    // vector<pair<int,int>> v;
    vector<pair<int, int>> vp = {{1, 2}, {3, 4}, {5, 6}};
    printvec(vp);

    // How to take input
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back({x, y}); //  or (make_pair(x,y))
    }
    printvec(vp);

    vector<vector<int>> v;
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < N; ++i)
    {
        // printvec(v[i]);
    }
}