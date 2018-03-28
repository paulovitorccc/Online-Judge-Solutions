#include <bits/stdc++.h>
#define MAXN 510

using namespace std;

char arr[MAXN][MAXN];
int n;

char caminha(int i, int j) {
	if(i < n && j < n && i >= 0 && j >= 0){
		if(arr[i][j] == 'S' || arr[i][j] == 'P') {
			return 'S';
		}
		else if(arr[i][j] == 'N'){
			return 'N';
		}
		else if(arr[i][j] == '>') {
			arr[i][j] = 'P';
			return arr[i][j] = caminha(i,j+1);
		}
		else if(arr[i][j] == '<') {
			arr[i][j] = 'P';
			return arr[i][j] = caminha(i,j-1);
		}
		else if(arr[i][j] == 'V') {
			arr[i][j] = 'P';
			return arr[i][j] = caminha(i+1,j);
		} else {
			arr[i][j] = 'P';
			return arr[i][j] = caminha(i-1,j);
		}
	} else {
		return 'N';
	}
}

int main() {
	
	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		scanf("%s", &arr[i][0]);
	}

	int result = 0;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			char aux = caminha(i,j);
			if(aux == 'S'){
				result += 1;
			}
		}
	}

	printf("%d\n", result);

	return 0;
}