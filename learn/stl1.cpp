#include<bits/stdc++.h>

using namespace std;

template <class A>
void sum(A &a, A &b) {
	A x;
	x = a + b;
	cout<< "Sum is " << x << endl;
}

int main() {
	int a = 5, b = 7;
	sum (a, b);
	
	double c = 1.0, d = 1.2;
	sum (c, d);
	return 0;
}

