#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	int boys[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &boys[i]);
	}
	int m;
	scanf("%d", &m);
	int girls[m];
	for(int j = 0; j < m; j++){
		scanf("%d", &girls[j]);
	}

    sort(boys, boys + n);

	sort(girls, girls + m);
	

	int result = 0;
	int pBoys = n-1;
	int pGirls = m-1;

	while(pBoys >= 0 && pGirls >= 0) {
		int dif = abs(boys[pBoys] - girls[pGirls]);
		if(dif <= 1){
			result++;
			pBoys--;
			pGirls--;
		}
		else if (boys[pBoys] > girls[pGirls]){
			pBoys--;
		} else {
			pGirls--;
		}
	}
	printf("%d\n", result);
}