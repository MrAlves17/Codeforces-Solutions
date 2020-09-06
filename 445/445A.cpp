#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n,m;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

bool freeforB(vector<vector<char> > chessBoard, int x, int y){
	for(int i=0; i<4; i++){
		if(x+dx[i]>=0 && x+dx[i]<n && y+dy[i]>=0 && y+dy[i]<m){
			if(chessBoard[x+dx[i]][y+dy[i]] == 'B'){
				return false;
			}
		}
	}

	return true;
}

vector<vector<char> > fillBoard(vector<vector<char> > chessBoard, int x, int y){
	if(freeforB(chessBoard,x,y)){
		chessBoard[x][y] = 'B';
	}
	else{
		chessBoard[x][y] = 'W';
	}

	for(int i=0; i<4; i++){
		if(x+dx[i]>=0 && x+dx[i]<n && y+dy[i]>=0 && y+dy[i]<m){
			if(chessBoard[x+dx[i]][y+dy[i]] == '.'){
				chessBoard = fillBoard(chessBoard, x+dx[i],y+dy[i]);
			}
		}
	}

	return chessBoard;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> m;

	vector<vector<char> > chessBoard(n);
	for(int i=0; i<n; i++){
		chessBoard[i].resize(m);
		for(int j=0; j<m; j++){
			cin >> chessBoard[i][j];
		}
	}

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(chessBoard[i][j] == '.'){
				chessBoard = fillBoard(chessBoard, i, j);
			}
		}
	}


	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout << chessBoard[i][j];
		}
		cout << endl;
	}
}
