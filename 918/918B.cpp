#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n,m;
	cin >> n >> m;

	map<string,string> server;
	string s,p;
	for(int i=0; i<n; i++){
		cin >> s >> p;
		server.insert(make_pair(p,s));
	}

	map<string,string>:: iterator it;
	for(int i=0; i<m; i++){
		cin >> s >> p;
		p.pop_back();
		it = server.find(p);
		cout << s << " " << p << "; #" << it->second << endl;
	}
}