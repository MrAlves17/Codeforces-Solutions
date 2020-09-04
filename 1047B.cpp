#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);

	int maior = 0;
	pair<int,int> largerTriangle;
	for(int i=0; i<n; i++){
		int x,y;
		scanf("%d%d", &x,&y);
		if(x+y > maior){
			maior = x+y;
			largerTriangle = make_pair(x,y);
		}
	}

	cout << largerTriangle.first+largerTriangle.second << endl;

}