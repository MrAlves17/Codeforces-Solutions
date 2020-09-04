#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	vector<ll int> a(n);

	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	sort(a.begin(),a.end(), greater<ll int>());

	list<ll int> b;

	for(int i=0; i<n; i++){
		if(i%2==0) b.push_back(a[i]);
		else b.push_front(a[i]);
	}

	list<ll int>:: iterator it;

	for(it=b.begin(); it!=b.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
}