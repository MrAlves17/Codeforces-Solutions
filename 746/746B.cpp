#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);

	char coded[n];
	list<char> decoded;
	scanf("%s", coded);

	if(n%2==0){
		for(int i=0; i<n; i++){
			if(i%2==0){
				decoded.push_front(coded[i]);
			}
			else{
				decoded.push_back(coded[i]);
			}
		}
	}
	else{
		for(int i=0; i<n; i++){
			if(i%2==0){
				decoded.push_back(coded[i]);
			}
			else{
				decoded.push_front(coded[i]);
			}
		}
	}

	list<char>:: iterator it;
	for(it=decoded.begin();it!=decoded.end(); it++){
		printf("%c", *it);
	}
	printf("\n");

}