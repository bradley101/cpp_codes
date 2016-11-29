#include<bits/stdc++.h>

using namespace std;

int main() {

	string s1;
	cin >> s1;
	cout << "Length of string is " << s1.size() << endl;
	s1[4] = 'a';
	cout << s1;
	s1 = '\0';
	cout << s1.empty() << " " << s1<< endl;
	return 0;
}

