#include <bits/stdc++.h>

using namespace std;

int main(){
	char mesa[2];
	cin >> mesa[0] >> mesa[1];
	char cartas[5][2];

	bool possible = false;
	for(int i=0; i<5; i++){
		cin >> cartas[i][0] >> cartas[i][1];
		if(cartas[i][0] == mesa[0] || cartas[i][1] == mesa[1]){
			possible = true;
		}
	}

	if(possible){
		cout << "YES\n";
	}
	else{
		cout << "NO\n";
	}



}