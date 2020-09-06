#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;

	int questions = 0;
	int timeWasted = 0;
	bool timeToGo = false;
	int timeLeft = 240-k;
	for(int i=1; i<=n && !timeToGo; i++){
		timeWasted += i*5;
		if(timeWasted <= timeLeft){
			questions++;
		}
		else{
			timeToGo = true;
		}
	}

	cout << questions << endl;
}