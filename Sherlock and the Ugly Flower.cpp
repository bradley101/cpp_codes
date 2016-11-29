#include<stdio.h>
#include<math.h>
#include<iostream>
#include<map>
#include<algorithm>
#include<string.h>

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

	int x, t, n, i;
	string s;
	in(t);
	in(n);
	map<int, string> fans;
	map<int, string>::iterator it;
	for(i = 0 ; i < t ; i += 1) {
		cin >> s;
		in(x);
		it = fans.find(x);
		if(it == fans.end()) 
			fans[x] = s;
		else {
			string s1 = it->second;
			if(s1 > s) {
				fans[x] = s;
			}
		}
	}
	std::map<int, string>::reverse_iterator rit = fans.rbegin();
	while(n--) {
		cout << rit->second << endl;
		rit++;
	}
	return 0;
}


