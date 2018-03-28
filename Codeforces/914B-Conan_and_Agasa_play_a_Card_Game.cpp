#include <bits/stdc++.h>
#define MAXN 1000000

using namespace std;

int arr[MAXN];

int main() {

	int maiorRepetido = 0;
	int casos;
	scanf("%d", &casos);
	for(int i = 0; i < casos; i++){
		int atual;
		scanf("%d", &atual);
		arr[atual]++;		
	}

	bool aux = false;
	for(int j = 0; j < MAXN; j++){
		if(arr[j]%2){
			aux = true;
			break;
		}
	}
	if(aux){
		printf("Conan\n");
	} else {
		printf("Agasa\n");
	}
	return 0;
}