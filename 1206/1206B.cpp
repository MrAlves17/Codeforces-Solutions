#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int n;
	cin >> n;
	long long int lista[n];

	long long int qtd0 = 0;
	long long int coins = 0;
	int product = 1;
	for(int i=0; i<n; i++){
		cin >> lista[i];
		if(lista[i] < 0){
			coins += abs(lista[i]+1);
			lista[i] = -1;
			product *= lista[i];
		}
		else if(lista[i] > 0){
			coins += abs(lista[i]-1);
			lista[i] = 1;
			product *= lista[i];
		}
		else{
			qtd0++;
		}
	}

	if(product == -1 && qtd0 == 0){
		coins += 2;
	}
	else{
		coins += qtd0;
	}

	cout << coins << endl;

}