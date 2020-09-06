#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, p, k;
	cin >> n >> p >> k;

	if(p-k > 1 && p+k < n){
		printf("<< ");
		for(int i=max(p-k, 1); i<=p+k; i++){
			if(i==p){
				printf("(%d) ", i);
			}
			else{
				printf("%d ", i);
			}
		}
		printf(">>\n");
	}
	else if(p-k <= 1 && p+k < n){
		for(int i=max(p-k, 1); i<=p+k; i++){
			if(i==p){
				printf("(%d) ", i);
			}
			else{
				printf("%d ", i);
			}
		}
		printf(">>\n");
	}
	else if(p-k > 1 && p+k >= n){
		printf("<< ");
		for(int i=p-k; i<=min(p+k,n); i++){
			if(i==p){
				printf("(%d) ", i);
			}
			else{
				printf("%d ", i);
			}
		}
		printf("\n");
	}
	else if(p-k <= 1 && p+k >= n){
		for(int i=max(p-k,1); i<=min(p+k,n); i++){
			if(i==p){
				printf("(%d) ", i);
			}
			else{
				printf("%d ", i);
			}
		}
		printf("\n");
	}
}