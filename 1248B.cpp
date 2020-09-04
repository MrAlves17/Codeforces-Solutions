#include <bits/stdc++.h>

#define ll long long
#define u unsigned

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	
	vector<int> stick(n);
	for(int i=0; i<n; i++){
		cin >> stick[i];
	}

	sort(stick.begin(),stick.end());

	ll int x=0,y=0;
	for(int i=stick.size()/2; i<stick.size(); i++){
		x += stick[i];
	}
	for(int i=0; i<stick.size()/2;i++){
		y += stick[i];
	}
	ll int dist = x*x+y*y;
	cout << dist << endl;
}