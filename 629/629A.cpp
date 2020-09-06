#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	char c;

	int somaLinha = 0;
	int happiness = 0;
	int coluna[n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> c;
			if(i==0) coluna[j] = 0;
			if(c == 'C'){
				somaLinha++;
				coluna[j]++;
			}
		}

		happiness += (somaLinha*(somaLinha-1))/2;

		somaLinha = 0;
	}
	for(int i=0; i<n; i++){
		happiness += (coluna[i]*(coluna[i]-1))/2;
	}

	cout << happiness << endl;

}