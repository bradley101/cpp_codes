#include<bits/stdc++.h>
using namespace std;


void build(long long int tree[], long long int a[], int s, int e, int node) {
	if(s == e) {
		tree[node] = a[s];
	} else {
		int mid = (s + e) / 2;
		//cout<<mid<<"    ";
		build(tree, a, s, mid, 2 * node);
		build(tree, a, mid + 1, e, 2 * node + 1);
	
		if(tree[2 * node] < 0 && tree[2 * node + 1] < 0) {
			tree[node] = max(tree[2 * node], tree[2 * node + 1]);
		} else if(tree[2 * node] < 0) {
			tree[node] = tree[2 * node + 1];
		} else if(tree[2 * node + 1] < 0) {
			tree[node] = tree[2 * node];
		} else {
			tree[node] = tree[2 * node] + tree[2 * node + 1];
		}
	}
}

long long int query(long long int tree[], long long int a[], int s, int e, int node, int l, int r) {
	if(l > e || r < s || s > e) {
		return LONG_MIN;
	}
	if(s >= l && e <= r) {
		return tree[node];
	}
	int mid = (s + e) / 2;
	long long int q1 = query(tree, a, s, mid, 2 * node, l, r);
	long long int q2 = query(tree, a, mid + 1, e, 2 * node + 1, l, r);
	if(q1 < 0 || q2 < 0) {
		return max(q1, q2);
	} else {
		return q1 + q2;
	}
}

int main() {
	long long int a[50000];
	int n;
	cin>>n;
	//a = new long long int[n];
	int i, m, l, r;
	int h = ceil(log2(n));
	long long int tree[(long) pow(2, h + 1)];
	for(i = 0 ; i < n ; i++) {
		cin>>a[i];
	}
	build(tree, a, 0, n - 1, 1);
	cin>>m;
	for(i = 1 ; i <= m ; i++) {
		cin>>l>>r;
		l--;
		r--;
		cout<<query(tree, a, 0, n - 1, 1, l, r)<<endl;
	}
	return 0;
}
