#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s;
	cin >> s;

	for(int i=0; i<s.size(); i++){
		if(s[i] == '.'){
			cout << '0';
		}
		else{
			if(s[i+1] == '.'){
				cout << '1';
			}
			else{
				cout << '2';
			}
			i++;
		}
	}

	cout << endl;
}
