#include<bits/stdc++.h>
using namespace std;
int dp[100][100];

int  profit(int year, int i, int j,int a[]){
	 
    if(i>j) return 0;	

    if(dp[i][j] != -1){
    	return dp[i][j];
    }

    else{
        int left_profit = profit(year+1,i+1,j,a)+year*a[i];
        int right_profit = profit(year+1,i,j-1,a)+year*a[j];

     return dp[i][j] = max(left_profit,right_profit);
       }
}

int main(){
	int t;
	cin>>t;
	while(t--){

    int n;
    cin>>n;

    int a[n];
    for(int i = 0;i<n;i++){
    	int num;
    	cin>>num;
    	a[i]=num;
    }
    int size = sizeof(a)/sizeof(int);
    int i=0;
    int j=size-1;
    int year =1;
    memset(dp,-1,sizeof(dp));

    cout<<"Max Profit is: "<<profit(year,i,j,a)<<endl;
}
}