#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n,k;
	cin >> n >> k;

	string s;
	cin >> s;

	if(n==1 && k==1) s = "0";
	else if(k>0 && s[0] > '1'){
		s.replace(0,1,"1");
		k--;
	}

	for(int i=1; i<n && k>0; i++){
		if(s[i] > '0'){
			s.replace(i,1,"0");
			k--;
		}
	}

	cout << s << endl;
}
