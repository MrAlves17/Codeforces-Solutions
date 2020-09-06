#include <bits/stdc++.h>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s,llps;
	cin >> s;

	for(int i=0; i<s.size(); i++){
		if(llps.back() < s[i]){
			llps = "";
			llps.push_back(s[i]);
		}
		else if(llps.back() == s[i]){
			llps.push_back(s[i]);
		}
	}

	cout << llps << endl;
}


/*
	abcbad



*/

