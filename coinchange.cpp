#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int arr[] = {1, 5};
	int size = sizeof(arr)/sizeof(arr[0]), change;
	
	cin >> change;
		
	vector<int> dp(change + 1, 0);
		
	for(int i = 0; i < size; i++){
		dp[arr[i]] = 1;
	}
		
	for(int i = 1; i <= change; i++){
		if(dp[i] > 0){
			for(int j = 0; j < size; j++){
				if(dp[i + arr[j]] > change + 1) break;
				
				if(dp[i + arr[j]] == 0)
				dp[i + arr[j]] = dp[i] + 1;
			}
		}
	}	
	cout << dp[change] << endl;
	
	return 0;
}

