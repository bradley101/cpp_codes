#include<bits/stdc++.h>
using namespace std;
bool *init;
int *a, *tree;

int getPrimeDivisor(int n) {
	if(n % 2 == 0) {
		return 2;
	}
	for(int i = 3 ; i <= sqrt(n) ; i+=2) {
		if(n % i == 0) {
			return i;
		}
	}
	return 1;
}

void buildtree(int start, int end, int node) {
	if(start == end) {
		// leaf node
		tree[node] = a[start];
		init[node] = false;
	} else {
		int mid = (start + end) / 2;
		buildtree(start, mid, 2 * node);
		buildtree(mid + 1, end, (2 * node) + 1);
		tree[node] = 0;
		init[node] = false;
	}
}

void updatetree(int start, int end, int node, int left, int right) {
	if(start > end || left > end || right < start) {
		return;
	}
	if(start == end) {
		tree[node] = tree[node] / getPrimeDivisor(tree[node]);
	}
	int mid = (start + end) / 2;
	updatetree(start, mid, 2 * node, left, right);
	updatetree(mid + 1, end, 2 * node + 1, left, right);
	tree[node] = max(tree[2 * node], tree[2 * node + 1]);
}

int query(int start, int end, int node, int left, int right) {
	if(right < start || left > end) {
		return -1;
	}
	
	if(start >= left && end <=right) {
		return tree[node];
	}
	int mid = (start + end) / 2;
	int q1 = query(start, mid, 2 * node, left, right);
	int q2 = query(mid + 1, end, 2 * node + 1, left, right);
	return max(q1, q2);
}

void initialize(int start, int end, int node, int left, int right) {
	if(start > end || left > end || right < start) {
		return;
	}
	if(init[node]) {
		return;
	}
	if(((left <= end && right > end) || (start <= right && left < start) || (left > start && right <= end) || (left >= start && right < end)) && start != end){
		int mid = (start + end) / 2;
		initialize(start, mid, 2 * node, left, right);
		initialize(mid + 1, end, 2 * node + 1, left, right);
		tree[node] = max(tree[2 * node], tree[2 * node + 1]);
	}
	if(start == end) {
		tree[node] = tree[node] / getPrimeDivisor(tree[node]);
		init[node] = true;
	}
	if(start >= left && end <= right) {
		int mid = (start + end) / 2;
		initialize(start, mid, 2 * node, left, right);
		initialize(mid + 1, end, 2 * node + 1, left, right);
		tree[node] = max(tree[2 * node], tree[2 * node + 1]);
		init[node] = true;
	}
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n, m, i, d, l, r;
		cin>>n>>m;
		a = new int[n];
		int h = (int)ceil(log2(n));
		tree = new int[(int)pow(2, h + 1)];
		init = new bool[(int)pow(2, h + 1)];
		
		for(i = 0 ; i < n ; i++) {
			cin>>a[i];
		}
		buildtree(0, n-1, 1);
		for(i = 1 ; i <= m ; i++) {
			cin>>d>>l>>r;
			initialize(0, n - 1, 1, l - 1, r - 1);
			if(d == 0) {
				updatetree(0, n - 1, 1, l - 1, r - 1);
			} else {
				int q = query(0, n - 1, 1, l - 1, r - 1);
				cout<<q<<" ";
			}
		}
		cout<<"\n";
	}
}
