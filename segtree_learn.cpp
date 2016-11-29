#include<bits/stdc++.h>

using namespace std;

int *tree, *a;

void buildtree(int node, int s, int e) {
	if(s == e) {
		tree[node] = a[s];
	} else {
		int mid = (s + e) / 2;
		
		buildtree(2 * node, s, mid);
		
		buildtree(2 * node + 1, mid + 1, e);
		
		tree[node] = min (tree[2 * node], tree[2 * node + 1]);
	}
}

int main() {

	int arr[] = {2, 4, 1, 5, 10, 7};
	
	a = arr;
	
	int h = ceil(log2(6));
	
	tree = new int [(int) pow (2, h + 1) ];
	
	buildtree(1, 0, 5);
	return 0;
}

