#include <bits/stdc++.h>

using namespace std;

int main(){
	char board[8][8];

	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			cin >> board[i][j];
		}
	}

	int b1=0, b2=0, count=0;
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			if(board[i][j] == 'B'){
				b1++;
			}
			if(board[j][i] == 'B'){
				b2++;
			}
		}
		if(b1 == 8){
			count++;
		}
		if(b2 == 8){
			count++;
		}

		b1 = 0;
		b2 = 0;
	}

	if(count == 16) count /= 2;

	cout << count << endl;


}