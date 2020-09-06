#include <bits/stdc++.h>
#define lli long long int
#define ulli unsigned long long int
#define endl "\n"

using namespace std;

int length_tree(vector<vector<string>> &adjMatrix, int i, int j){
	if(j<adjMatrix.size()){
		for(int x=0; x<adjMatrix.size(); x++){
			if(adjMatrix[x][0] == adjMatrix[i][j]){
				return length_tree(adjMatrix,x,1)+1;
			}
		}

		return length_tree(adjMatrix,i,j+1);
	}
	else{
		return 2;
	}

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;

	string p1,r,p2;

	vector<vector<string> > adjMatrix;
	for(int i=0; i<n; i++){
		cin >> p1 >> r >> p2;
		for_each(p1.begin(), p1.end(), [](char & c) {
			c = ::tolower(c);
		});
		for_each(p2.begin(), p2.end(), [](char & c) {
			c = ::tolower(c);
		});

		bool found = false;
		for(int j=0; j<adjMatrix.size() && !found; j++){
			if(adjMatrix[j].size()>1 && adjMatrix[j][0] == p2){
				adjMatrix[j].push_back(p1);
				found = true;
			}
		}

		if(!found){
			adjMatrix.push_back(vector<string>());
			adjMatrix[adjMatrix.size()-1].push_back(p2);
			adjMatrix[adjMatrix.size()-1].push_back(p1);
		}
	}

	int l = length_tree(adjMatrix,0,1);
	cout << l << endl;
}