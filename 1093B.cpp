#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	string s, rs;
	for(int i=0; i<t; i++){
		cin >> rs;
		s = rs;
		reverse(rs.begin(), rs.end());

		if(s!=rs){
			cout << s << endl;
			continue;
		}

		for(int j=0; j<rs.size()/2; j++){
			if(rs[j]!=rs[j+1]){
				swap(rs[j],rs[j+1]);
				break;
			}
		}

		if(rs!=s){
			cout << rs << endl;
		}
		else{
			cout << -1 << endl;
		}
	}
}