#include <bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ulli unsigned long long int

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	set<char> k;

	string s;
	getline(cin,s);

	for(int i=0; i<s.size(); i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			k.insert(s[i]);
		}
	}

	cout << k.size() << endl;
}