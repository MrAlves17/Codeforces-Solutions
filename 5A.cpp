#include <bits/stdc++.h>

using namespace std;

int main(){
	string action;
	int n=0;
	int traffic=0;
	while(getline(cin, action)){
		if(action[0] == '+') n++;
		else if(action[0] == '-') n--;
		else{
			int i=0;
			while(action[i] != ':'){
				i++;
			}
			traffic += n*(action.size() - i-1);
		}
	}

	cout << traffic << endl;
}