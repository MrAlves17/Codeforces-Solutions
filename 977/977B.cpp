#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);

	string s;
	cin >> s;
	map<string,int> m;
	map<string,int>:: iterator it;
	for(int i=0; i<n-1; i++){
		string aux = s.substr(i,2);
		it = m.find(aux);
		if(it == m.end()){
			m.insert(make_pair(aux,1));
		}
		else{
			it->second++;
		}
	}
	int maior = -1;
	string twoGram;
	for(it=m.begin(); it!=m.end(); it++){
		if(it->second > maior){
			maior = it->second;
			twoGram = it->first;
		}
	}
	cout << twoGram << endl;

}