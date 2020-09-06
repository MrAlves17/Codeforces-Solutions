#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n,k;
	cin >> n >> k;

	string s;
	cin >> s;

	char c;
	int qtd;
	set<char> p;
	for(int i=0; i<k; i++){
		cin >> c;
		p.insert(c);
	}
	ll int sum=0,j=0;
	for(int i=0; i<n; i++){
		if(p.count(s[i])){
			j++;
		}
		else{
			sum += (j*(j+1))/2;
			j=0;
		}
	}
	sum += (j*(j+1))/2;
	
	cout << sum << endl;
}