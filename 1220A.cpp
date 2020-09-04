#include <bits/stdc++.h>

using namespace std;

int main(){
	int k;
	cin >> k;
	string s;
	cin >> s;

	int z=0,n=0;
	for(int i=0; i<s.size(); i++){
		if(s[i] == 'z'){
			z++;
		}
		else if(s[i] == 'n'){
			n++;
		}
	}

	int qtd1 = n;

	for(int i=0; i<qtd1; i++){
		cout << "1 "; 
	}
	int qtd0 = z;
	for(int i=0; i<qtd0; i++){
		cout << "0 ";
	}

	if(qtd0+qtd1>0){
		cout << endl;
	}
}