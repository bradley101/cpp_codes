#include<stdio.h>
#include<math.h>
#include<iostream>
#include<map>
#include<algorithm>
#include<stack>
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
	int t, i;
	in(t);
	while(t--) {
		stack<char> st;
		string s;
		cin >> s;
		char ch, popch;
		for(i = 0 ; i < s.size() ; i += 1) {
			ch = s[i];
			if(ch == '(') {
				st.push(ch);
			} else if(ch >= 'a' && ch <= 'z') {
				cout << ch;
			} else if(ch == ')') {
				popch = st.top();
				while(popch != '(') {
					cout << popch;
					st.pop();
					popch = st.top();
				}
				st.pop();
			} else {
				st.push(ch);
			}
		}
		cout << endl;
	}
	return 0;
}


