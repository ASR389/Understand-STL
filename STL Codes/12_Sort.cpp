#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[5] = {6,2,1,3,9};
    sort(a,a+4);       //sort for array
    // we can also sort(a+1,a+n);

    for(int i=0; i<5; i++)
    cout<<a[i]<<" ";

cout<<endl;

    // for vector

    vector<int> v = {6,2,1,3,9};
    sort(v.begin(), v.end());
    // sort(v.begin()+1, v.end()); //also do like this

    for(auto j : v)
    {cout<<j<<" ";}

}