#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		int n;
		scanf("%d", &n);
		long long int taste[n];
		long long int sum;

		for(int j=0; j<n; j++){
			scanf("%lld", &taste[j]);
		}

		/////////////////////////
		sum = 0;
		bool no = true;
		for(int j=0; j<n && no; j++){
			sum += taste[j];
			if(sum<=0) no = false;
		}		
		if(no){
			sum = 0;
			for(int j=n-1; j>=0 && no; j--){
				sum += taste[j];
				if(sum<=0) no = false;
			}
		}


		if(no){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
}