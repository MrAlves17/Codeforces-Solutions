#include <bits/stdc++.h>

using namespace std;

int main(){
	char s[2], t[2];
	cin >> s[0] >> s[1] >> t[0] >> t[1];
	s[0] = (char)((int)s[0] - 97);
	t[0] = (char)((int)t[0] - 97);
	s[1] = (char)((int)s[1] - 48);
	t[1] = (char)((int)t[1] - 48);

	int deslX = (int)s[0] - (int)t[0];
	int deslY = (int)s[1] - (int)t[1];
	if(deslX <= 0 && deslY <= 0){
		deslX = abs(deslX);
		deslY = abs(deslY);
		cout << max(deslX, deslY) << endl;
		for(int i=0; i<min(deslX,deslY); i++){
			cout << "RU" << endl;
		}
		if(max(deslX, deslY) == deslX && deslX > deslY){
			for(int i=0; i<abs(deslX - deslY); i++){
				cout << "R" << endl;
			}
		}
		else{
			for(int i=0; i<abs(deslX - deslY); i++){
				cout << "U" << endl;
			}
		}
	}
	else if(deslX <= 0 && deslY > 0){
		deslX = abs(deslX);
		deslY = abs(deslY);
		cout << max(deslX, deslY) << endl;
		for(int i=0; i<min(deslX,deslY); i++){
			cout << "RD" << endl;
		}
		if(max(deslX, deslY) == deslX && deslX > deslY){
			for(int i=0; i<abs(deslX - deslY); i++){
				cout << "R" << endl;
			}
		}
		else{
			for(int i=0; i<abs(deslX - deslY); i++){
				cout << "D" << endl;
			}
		}
	}
	else if(deslX > 0 && deslY <= 0){
		deslX = abs(deslX);
		deslY = abs(deslY);
		cout << max(deslX, deslY) << endl;
		for(int i=0; i<min(deslX,deslY); i++){
			cout << "LU" << endl;
		}
		if(max(deslX, deslY) == deslX && deslX > deslY){
			for(int i=0; i<abs(deslX - deslY); i++){
				cout << "L" << endl;
			}
		}
		else{
			for(int i=0; i<abs(deslX - deslY); i++){
				cout << "U" << endl;
			}
		}
	}
	else if(deslX > 0 && deslY > 0){
		deslX = abs(deslX);
		deslY = abs(deslY);
		cout << max(deslX, deslY) << endl;
		for(int i=0; i<min(deslX,deslY); i++){
			cout << "LD" << endl;
		}
		if(max(deslX, deslY) == deslX && deslX > deslY){
			for(int i=0; i<abs(deslX - deslY); i++){
				cout << "L" << endl;
			}
		}
		else{
			for(int i=0; i<abs(deslX - deslY); i++){
				cout << "D" << endl;
			}
		}
	}
}