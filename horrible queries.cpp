//           ACCEPTED 14-09-2016 SPOJ

#include<bits/stdc++.h>
using namespace std;
long long int *tree, *lazy, *a;

void build(int node, int s, int e) {
	if(s == e) {
		tree[node] = 0;
		lazy[node] = 0;
	} else {
		int mid = (s + e) / 2;
		build(2 * node, s, mid);
		build(2 * node + 1, mid + 1, e);
		tree[node] = tree[2 * node] + tree[2 * node + 1];
		lazy[node] = 0;
	}
}

void updatetree(int node, int s, int e, int l, int r,long long int k) {
	
	if(lazy[node] != 0) {
		tree[node] += ((long long int) (e - s + 1)) * lazy[node];
		if(s != e) {
			lazy[2 * node] += lazy[node];
			lazy[2 * node + 1] += lazy[node];
		}
		lazy[node] = 0;
	}
	
	if(s > e || l > e || r < s) {
		return;
	}
	
	
	if(s >= l && e <= r) {
		tree[node] += ((long long int) (e - s + 1)) * k;
		if(s != e) {
			lazy[2 * node] += k;
			lazy[2 * node + 1] += k;
		}
		return;
	}
	int mid = (s + e) / 2;
	updatetree(2 * node, s, mid, l, r, k);
	updatetree(2 * node + 1, mid + 1, e, l, r, k);
	tree[node] = tree[2 * node] + tree[2 * node + 1];
	
}

long long int query(int node, int s, int e, int l, int r) {
	if(s > e || l > e || r < s) {
		return 0;
	}
	
	if(lazy[node] != 0) {
		tree[node] += ((long long int) (e - s + 1)) * lazy[node];
		if(s != e) {
			lazy[2 * node] += lazy[node];
			lazy[2 * node + 1] += lazy[node];
		}
		lazy[node] = 0;
	}
	
	if(e <= r && s >= l) {
		return tree[node];
	}
	int mid = (s + e) / 2;
	long long int q1 = query(2 * node, s, mid, l, r);
	long long int q2 = query(2 * node + 1, mid + 1, e, l, r);
	
	return q1 + q2;
}

int main() {
	int t, n;
	cin>>t;
	while(t--) {
		int c;
		cin>>n>>c;
		
		int h = ceil(log2(n)), i;
		int elem = pow(2, h + 1);
		tree = new long long int[elem];
		lazy = new long long int[elem];
		
		build(1, 0, n - 1);
		for(i = 1 ; i <= c ; i++) {
			int d;
			cin>>d;
			if(d == 0) {
				int x, y;
				long long int val;
				cin>>x>>y>>val;
				x--;
				y--;
				updatetree(1, 0, n - 1, x, y, val);
			} else {
				int x, y;
				cin>>x>>y;
				x--;
				y--;
				cout<<query(1, 0, n - 1, x, y)<<endl;
			}
		}
	}
	return 0;
}
