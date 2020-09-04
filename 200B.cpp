#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	int soma = 0, p;
	for(int i=0;i<n;i++){
		cin >> p;
		soma += p;
	}
	double juice = 1.0*soma/n;
	cout << juice << endl;
}