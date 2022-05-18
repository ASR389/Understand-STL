#include <bits/stdc++.h>
using namespace std;

/*************  upper bound and lower bound   ************************
lower_bound -> returns agar same value present hai toh wo return kr dega
nahi toh usse badi jo nearest value hogi wo return kr dega.

upper_bound -> always return usse badi jo nearest value hogi wo return kr dega.

bound will return pointer means address so we need *ptr = in case of array
and auto it = iteratot in case of vector

*/

int main()
{
    int n;
    cin >> n;
    int a[5];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    // in array
    int *ptr = lower_bound(a, a + n, 50);
    cout << (*ptr) << endl;

    int *ptr2 = upper_bound(a, a + n, 20);
    if (ptr2 == (a + n))
    {
        cout << "Not found";
        return 0;
    }
    cout << (*ptr2) << endl;

    // In case of vector
    /*   auto it = upper_bound(a.begin(), a.end(), 5);
       if (it == a.end())
       {
           cout << "Not found";
           return 0;
       }
       cout << (*it) << endl;
       */
}