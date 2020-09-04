#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n;
	cin >> n;
	long long int n100, n20, n10, n5, n1;
	n100 = n/100;
	n %= 100;
	n20 = n/20;
	n %= 20;
	n10 = n/10;
	n %= 10;
	n5 = n/5;
	n %= 5;
	n1 = n;

	cout << n100+n20+n10+n5+n1 << endl;
}