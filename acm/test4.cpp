#include<stdio.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<map>
#define in(n) scanf("%d",&n)
#define inl(n) scanf("%ld",&n)
#define inll(n) scanf("%lld",&n)
#define ins(s) scanf("%s",s)
#define out(n) printf("%d",n)
#define outl(n) printf("%ld",n)
#define outll(n) printf("%lld",n)
#define outs(n) printf("%s",s)
#define br printf("\n")

#define max(x, y) x>y?x:y
#define min(x, y) x<y?x:y
typedef long long int lli;
using namespace std;
int main() {

	map<lli, bool> check;
	lli t;
	inll(t);
	while(t--) {
		lli n, i, j;
		inll(n);
		lli a[n];
		for(i = 0 ; i < n ; i += 1) {
			lli x;
			inll(x);
			a[i] = x;
			check[x] = true;
		}
		map<lli, bool>::iterator it;
		bool exit = false;
		for(i = 0 ; i < n ; i += 1) {
			for(j = 0 ; j < n ; j += 1) {
				if(i != j) {
					it = check.find(a[i] * a[j]);
					if(it == check.end()) {
						if(!it->second == true) {
							exit = true;
							break;
						}
					}
				}
			}
			if(exit) break;
		}
		if(n == 1) {
			printf("no");
		} else {
			if(exit) {
				printf("no");
			} else {
				printf("yes");
			}
		} 
		br;
	}

	return 0;
}


