#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    int min = *min_element(v.begin() , v.end());
    cout <<"Mininum element is: "<<min << endl;

    int max = *max_element(v.begin(), v.end());
    cout <<"Maximum element is: "<< max << endl;

    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum is: "<<sum << endl
    ;
    int ct = count(v.begin(), v.end(), 2);
    cout <<"Count of number is: "<< ct << endl;

    auto it = find(v.begin(), v.end(), 2);
    if (it != v.end())
        cout << *it << endl;
    else
        cout << "Element Not Found" << endl;
}