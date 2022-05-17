#include<bits/stdc++.h>
using namespace std;
int main()
{
map<int,multiset<string> > marks_map;
int n;
cin>>n;
for(int i=0;i<n;++i)
{
int marks;
string name;
cin>>name>>marks;
marks_map[-1*marks].insert(name);
 
}
for(auto &m:marks_map)
{
auto &students=m.second;  //used as we access multiset
int marks=m.first;
for(auto &stud:students)   //for printing multiset
{
cout<<stud<<" "<<marks*-1<<endl;
}
}
}