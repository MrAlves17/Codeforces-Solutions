#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	long long int n;
	cin >> n;

	vector<long long int> a(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	cout << min(a[n-2] - a[0], a[n-1] - a[1]) << endl;

}