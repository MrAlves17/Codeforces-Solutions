#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;

	string coord[n];
	int type[n];
	for(int i=0; i<n; i++){
		cin >> coord[i];
		type[i] = 0;
		for(int j=0; j<coord[i].size(); j++){
			if(coord[i][j] >= '0' && coord[i][j] <= '9' && type[i] == 0){
				type[i] = 2;
			}
			else if(coord[i][j] >= 'A' && coord[i][j] <= 'Z' && type[i] == 2){
				type[i] = 1;
				break;
			}
		}
	}
	int pot10=1, pot26=1;

	for(int i=0; i<n; i++){
		int row, col;
		list<char> colt;
		if(type[i] == 1){
			row = 0;
			col = 0;
			bool done = false;
			for(int j=0; !done; j++){
				if(coord[i][j] == 'C'){
					for(int k=j-1; coord[i][k] != 'R'; k--){
						row += pot10*((int)coord[i][k] - 48);
						pot10 *= 10;
					}
					pot10 = pow(10,coord[i].size() - (j+2));
					for(int k=j+1; k<coord[i].size(); k++){
						col += pot10*((int)coord[i][k] - 48);
						pot10 /= 10;
					}
					done = true;
				}
			}
			int quociente = col, resto;
			while(quociente > 26){
				resto = quociente%26;
				quociente /= 26;
				if(resto == 0){
					resto = 26;
					quociente--;
				}
				colt.push_front((char)(resto + 64));
			}
			colt.push_front((char)(quociente+64));

			list<char>:: iterator it;
			for(it=colt.begin(); it!=colt.end(); it++){
				cout << *it;
			}
			cout << row << endl;
		}
		else if(type[i] == 2){
			row = 0;
			col = 0;
			bool done = false;
			for(int j=0; !done; j++){
				if(coord[i][j] >= '0' && coord[i][j] <= '9'){
					for(int k=j-1; k>=0; k--){
						col += pot26*((int)coord[i][k]-64);
						pot26 *= 26;
					}
					pot26 = 1;
					done = true;
				}
			}
			for(int j=coord[i].size()-1; coord[i][j] < 'A' || coord[i][j] > 'Z'; j--){
				row += pot10*((int)coord[i][j]-48);
				pot10 *= 10;
			}
			cout << "R" << row << "C" << col << endl;
		}

		pot10 = 1;
		pot26 = 1;
	}
}