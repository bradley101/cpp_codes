#include<bits/stdc++.h>
#define M 1000000007
using namespace std;

int main() {
	FILE *fin, *fout;
	fin = fopen("alarge.in", "r");
	fout = fopen("A-large-out.txt", "w");
	int t, casen = 1;
	fscanf(fin, "%d",&t);
	while(t--) {
		char s[1001];
		fscanf(fin, "%s",s);
		long long int ans = 1;
		int len = strlen(s), i;
		if(len == 1) {
			ans = 1;
		} else {
			for(i = 0 ; i < len ; i += 1) {
				if(i == 0) {
					if(s[0] == s[1]) {
						ans = ((ans % M) * (1)) % M;
					} else {
						ans = ((ans % M) * (2)) % M;
					}
				} else if(i == len - 1) {
					if(s[len - 1] == s[len - 2]) {
						ans = ((ans % M) * (1)) % M;
					} else {
						ans = ((ans % M) * (2)) % M;
					}
				} else {
					if(s[i] == s[i - 1] && s[i] == s[i + 1]) {
						ans = ((ans % M) * (1)) % M;
					} else if(s[i] != s[i - 1] && s[i] != s[i + 1] && s[i - 1] != s[i + 1]) {
						ans = ((ans % M) * (3)) % M;
					} else {
						ans = ((ans % M) * (2)) % M;
					}
				}
			}
		}
		fprintf(fout, "Case #%d: %lld\n",casen,ans);
		casen++;
	}
	fclose(fin);
	fclose(fout);
}

