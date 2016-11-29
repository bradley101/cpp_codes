#include<bits/stdc++.h>

using namespace std;

int *tree;

void build(int s, int e, int node) {
	if(s == e) {
		tree[node] = 0;
		return;
	}
	build(s, (s + e) / 2, 2 * node);
	build((s + e) / 2 + 1, e, 2 * node + 1);
	tree[node] = 0;
}

int query(int s, int e, int node, int l, int r) {
	if(s > e || e < l || s > r) {
		return 0;
	}
	if(s >= l && e <= r) {
		return tree[node];
	}
	int q1 = query(s, (s + e) / 2, 2 * node, l, r);
	int q2 = query((s + e) / 2 + 1, e, 2 * node + 1, l, r);
	return q1 + q2;
}

void update(int s, int e, int node, int l, int r) {
	if(s > e || e < l || s > r) {
		return;
	}
	if(s == e) {
		tree[node] = (tree[node] + 1) % 10;
		return;
	}
	update(s, (s + e) / 2, 2 * node, l, r);
	update((s + e) / 2 + 1, e, 2 * node + 1, l, r);
	tree[node] = tree[2 * node] + tree[2 * node + 1];
}

int main() {

	int n, q;
	scanf("%d %d",&n,&q);
	int h = ceil(log2(n));
	tree = new int[(int)pow(2, h + 1)];
	build(0, n - 1, 1);
	while(q--) {
		int t, x, y;
		scanf("%d %d %d",&t,&x,&y);
		x--;
		y--;
		if(t == 1) {
			update(0, n - 1, 1, x, y);
		} else {
			printf("%d\n",query(0, n - 1, 1, x, y));
		}
	}
	return 0;
}

