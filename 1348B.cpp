#include <iostream>
#include <list>
#include <set>
#define ll long long
#define ull unsigned long long
#define endl "\n"
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	while(t--){
		int n,k;
		cin >> n >> k;
		
		set<int> p;

		int aux;
		for(int i=0; i<n; i++){
			cin >> aux;
			p.insert(aux);
		}

		if(p.size()>k){
			cout << -1 << endl;
			continue;
		}

		cout << n*k << endl;
		for (int i=0;i<n;i++){
			for (set<int>::iterator it=p.begin(); it!=p.end(); it++)
				cout<<*it<<' ';
			for (int j=0;j<k-(int)p.size();j++)
				cout<<1<<' ';
		}
		cout << endl;
	}

}