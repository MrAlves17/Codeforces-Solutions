#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	int n,a,b;
	for(int i=0; i<t; i++){
		cin >> n >> a >> b;
		string s;
		int add=-1;
		for(int j=0; j<n; j++){
			s.push_back(char(int('a')+j%b));
		}

		cout << s << endl;
	}
}