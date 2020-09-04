#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);

	map<char,int> sala1,sala2;
	map<char,int>:: iterator it,it2;
	string aux;
	for(int i=0; i<n; i++){
		cin >> aux;
		it = sala1.find(aux[0]);
		if(it == sala1.end()){
			sala1.insert(make_pair(aux[0],1));
		}
		else{
			it2 = sala2.find(aux[0]);
			if(it2==sala2.end()){
				sala2.insert(make_pair(aux[0],1));
			}
			else{
				if(it->second < it2->second){
					it->second++;
				}
				else{
					it2->second++;
				}
			}
		}
	}

	int nChatties=0;
	for(it=sala1.begin(); it!=sala1.end(); it++){
		nChatties += (it->second*(it->second-1))/2;
	}
	for(it2=sala2.begin(); it2!=sala2.end(); it2++){
		nChatties += (it2->second*(it2->second-1))/2;
	}

	cout << nChatties << endl;
}