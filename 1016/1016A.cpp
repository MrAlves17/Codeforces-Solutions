#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	scanf("%d%d",&n,&m);

	int line=0, pagesTurned=0, names;
	for(int i=0; i<n; i++){
		scanf("%d",&names);

		pagesTurned = (names+line)/m;
		line = (names+line)%m;
		printf("%d ", pagesTurned);
	}
	printf("\n");

}