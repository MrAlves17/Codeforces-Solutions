#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	set<int> l,c;
	cin >> n;
	int a,b;
	for(int i=0; i<n; i++){
		cin >> a >> b;
		l.insert(a);
		c.insert(b);
	}
	cout << min(l.size(), c.size()) << endl;
}