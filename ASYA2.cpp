//Author : pakhandi
//
using namespace std;

#include<bits/stdc++.h>

#define wl(n) while(n--)
#define fl(i,a,b) for(i=a; i<b; i++)
#define rev(i,a,b) for(i=a; i>=b; i--)

#define si(n) scanf("%d", &n)
#define sll(l) scanf("%lld",&l)
#define ss(s) scanf("%s", s)
#define sc(c) scanf("%c", &c)
#define sd(f) scanf("%lf", &f)

#define pi(n) printf("%d\n", n)
#define pll(l) printf("%lld\n", l)
#define ps(s) printf("%s\n", s)
#define pc(c) printf("%c\n", c)
#define pd(f) printf("%lf\n", f)

#define debug(x) cout<<"\n#("<<x<<")#\n"
#define nline printf("\n")

#define mem(a,i) memset(a,i,sizeof(a))

#define MOD 1000000007
#define ll long long int
#define u64 unsigned long long int

#define mclr(strn) strn.clear()
#define ignr cin.ignore()
#define PB push_back
#define SZ size
#define MP make_pair
#define fi first
#define sec second

int N[2];
int ans;

std::vector<int> v[2];

int target = (1<<26)-1;

char str1[1003];

int main()
{
	int i, j, k;

	cin>>N[0]>>N[1];

	assert(N[0] >= 1 && N[0] <= 10000);
	assert(N[1] >= 1 && N[1] <= 10000);

	fl(k,0,2)
	{
		fl(i,0,N[k])
		{
			scanf("%s", str1);

			int inLimit = strlen(str1);
			assert(inLimit >= 1 && inLimit <= 1000);
			int num = 0;

			fl(j,0,inLimit)
			{
				int ele = int(str1[j]-'A');
				num |= (1<<ele);
			}
			v[k].PB(num);
		}
	}

	fl(i,0,N[0])
	{
		fl(j,0,N[1])
		{
			int num = 0;
			num = v[0][i] | v[1][j];

			if(num == target)
				ans++;
		}
	}

	cout<<ans; nline;
		

	return 0;
}
/*
	Powered by Buggy Plugin
*/
