#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>v){
     cout<< "Size: " << v.size() <<endl;
     for (int i = 0; i < v.size(); i++)
     {
         cout << v[i] <<" ";
     }
     cout<<endl;
}

int main(){
   int a[10];
//    Array has fixed size 
vector<int> v;
vector<double> dv;
vector<string>s;

int n;
cin>>n;
for(int i=0; i<n; i++){
    int x;
    cin>> x;
    v.push_back(x);
}
printvec(v);




}