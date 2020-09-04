#include <bits/stdc++.h>

using namespace std;

int main(){
	string flags;
	cin >> flags;
	string firstSequence, secondSequence;
	cin >> firstSequence >> secondSequence;

	bool forward1 = false, forward2 = false, forward=false;
	int i, j;
	for(i=0; i<flags.size(); i++){
		if(flags[i] == firstSequence[0]){
			for(j=i+1; j<i+(int)firstSequence.size(); j++){
				if(flags[j] != firstSequence[j-i]){
					break;
				}
				if(j+1 < i+(int)firstSequence.size() && j+1 == flags.size()){
					break;
				}
				if(j+1 == i+(int)firstSequence.size()){
					forward1 = true;
					i = j+1;
					break;
				}
			}
			if((int)firstSequence.size() == 1){
				forward1 = true;
				i = j;
			}
		}
		if(forward1) break;
	}
	if(forward1){
		for(int k=i; k<flags.size(); k++){
			if(flags[k] == secondSequence[0]){
				for(j=k+1; j<k+(int)secondSequence.size(); j++){
					if(flags[j] != secondSequence[j-k]){
						break;
					}
					if(j+1 < k+(int)secondSequence.size() && j+1 == flags.size()){
						break;
					}
					if(j+1 == k+(int)secondSequence.size()){
						forward2 = true;
					}
				}
				if((int)secondSequence.size() == 1){
					forward2 = true;
				} 
			}
			if(forward2) break;
		}
	}
	if(forward2 && forward1){
		forward = true;
	}
	bool backward1 = false, backward2 = false, backward = false;

	for(i=flags.size()-1; i>=0; i--){
		if(flags[i] == firstSequence[0]){
			for(j=i-1; j>i-(int)firstSequence.size(); j--){
				if(flags[j] != firstSequence[i-j]){
					break;
				}
				if(j-1 > i-(int)firstSequence.size() && j-1 < 0){
					break;
				}
				if(j-1 == i-(int)firstSequence.size()){
					backward1 = true;
					i = j-1;
					break;
				}
			}
			if((int)firstSequence.size() == 1){
				backward1 = true;
				i = j;
			}
		}
		if(backward1) break;
	}

	if(backward1){
		for(int k=i; k>=0; k--){
			if(flags[k] == secondSequence[0]){
				for(int l=k-1; l>k-(int)secondSequence.size(); l--){
					if(l-1 < k-(int)secondSequence.size() && l-1 < 0){
						break;
					}
					if(flags[l] != secondSequence[k-l]){
						break;
					}
					if(l-1 == k-(int)secondSequence.size()){
						backward2 = true;
					}
				}
				if((int)secondSequence.size() == 1){
					backward2 = true;
				}
			}
			if(backward2) break;
		}
	}
	if(backward2 && backward1){
		backward = true;
	}

	if(forward && backward) cout << "both\n";
	else if(forward && !backward) cout << "forward\n";
	else if(!forward && backward) cout << "backward\n";
	else cout << "fantasy\n";
	
}