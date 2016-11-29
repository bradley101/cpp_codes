#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
		char s[6200], dp[6200][6200];
		cin>>s;
		int i, j;
		int len = strlen(s);
		for(i = 0 ; i < len ; i++) {
			dp[0][i] = 0;
			dp[i][0] = 0;
		}
		for(i = 1 ; i <= len ; i++) {
			for(j = 1 ; j <= len ; j++) {
				dp[i][j] = s[i - 1] == s[j - 1]?(dp[i - 1][j - 1] + 1):max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
		cout<<dp[len][len]<<endl;
	}
	return 0;
}
