#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<string, int> > rounds;
	map<string, int> table, table2;
	string name;
	int score;
	pair<map<string, int>:: iterator, bool> ret;
	for(int i=0; i<n; i++){
		cin >> name >> score;
		rounds.push_back(make_pair(name, score));
		ret = table.insert(make_pair(name, score));
		if(!ret.second){
			ret.first->second += score;
		}
	}

	map<string, int>:: iterator it;
	int bestScore = -INT_MAX;
	for(it = table.begin(); it!=table.end(); it++){
		if(it->second > bestScore){
			bestScore = it->second;
		}
	}
	set<string> bestScoreNames;
	for(it = table.begin(); it!=table.end(); it++){
		if(it->second == bestScore){
			bestScoreNames.insert(it->first);
		}
	}

	for(int i=0; i<n; i++){
		ret = table2.insert(make_pair(rounds[i].first, rounds[i].second));
		if(!ret.second){
			ret.first->second += rounds[i].second;
		}
		if(ret.first->second >= bestScore && bestScoreNames.count(ret.first->first)){
			cout << rounds[i].first << endl;
			break;
		}
	}
}