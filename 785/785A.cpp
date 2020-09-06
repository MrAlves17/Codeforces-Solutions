#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	string s[n];
	int soma = 0;
	for(int i=0; i<n; i++){
		cin >> s[i];
		if(s[i] == "Tetrahedron"){
			soma += 4;
		}
		else if(s[i] == "Cube"){
			soma += 6;
		}
		else if(s[i] == "Octahedron"){
			soma += 8;
		}
		else if(s[i] == "Dodecahedron"){	
			soma += 12;
		}
		else if(s[i] == "Icosahedron"){	
			soma += 20;
		}
	}

	cout << soma << endl;
}