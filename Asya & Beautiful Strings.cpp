#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, m, i, j;
	scanf("%d %d",&n,&m);
	int cn[n][26], cm[m][26];
	
	for(i = 0 ; i < n ; i++) {
		char s[2000];
		scanf("%s",s);
		int len = strlen(s);
		for(j = 0 ; j < len ; j++) {
			cn[i][s[j] - 'A'] = 1;
		}
	}
	for(i = 0 ; i < m ; i++) {
		char s[2000];
		scanf("%s",s);
		int len = strlen(s);
		for(j = 0 ; j < len ; j++) {
			cm[i][s[j] - 'A'] = 1;
		}
	}
	int count = 0;
	for(i = 0 ; i < n ; i++) {
		for(j = 0 ; j < m ; j++) {
			int l = 0;
			for( ; l < 26 ; l++) {
				if(cn[i][l] != 1 && cm[j][l] != 1) {
					break;
				}
			}
			if(l == 26) {
				count++;
			}
		}
	}
	printf("%d\n",count);
}
