#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];

	vector<int> v(n);
	int maior=0;
	int current=1;
	for(int i=0; i<n; i++){
		cin >> v[i];
		if(i==0) continue;
		if(v[i] > v[i-1]){
			current++;
		}
		else{
			if(current > maior){
				maior = current;
			}
			current = 1;
		}
	}
	if(current > maior) maior = current;
	cout << maior << endl;


}