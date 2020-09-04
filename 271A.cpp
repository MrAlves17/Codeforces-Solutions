#include <bits/stdc++.h>
#define endl "\n"
#define lli long long int
#define ulli unsigned long long int

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int y;

	cin >> y;
	int a=y+1;
	while(true){
		set<char> k;
		string s=to_string(a);
		int i;
		for(i=0; i<s.size(); i++){
			k.insert(s[i]);
		}
		if(k.size()==4){
			break;
		}
		k.clear();

		a++;
	}

	cout << a << endl;
}