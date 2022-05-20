#include<bits/stdc++.h>
using namespace std;
int dp[100][100];   // 1-> initializing 2D-dp 

int  profit(int year, int i, int j,int a[]){
	 
    if(i>j) return 0;	

    if(dp[i][j] != -1){
    	return dp[i][j];          // 3-> for checking value -1 or another calculated value 
    }

    else{
        int left_profit = profit(year+1,i+1,j,a)+year*a[i];
        int right_profit = profit(year+1,i,j-1,a)+year*a[j];

     dp[i][j] = max(left_profit,right_profit); // 4-> now storing value and returning it
     return dp[i][j];
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
    memset(dp,-1,sizeof(dp));   // 2-> setting all values of 2d table as -1

    cout<<"Max Profit is: "<<profit(year,i,j,a)<<endl;
}
}