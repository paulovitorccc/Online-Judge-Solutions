#include <bits/stdc++.h>
#define MAXN 1000010

using namespace std;

int arrDistancias[MAXN];

int main() {
	int qtdCirculos, qtdTiros;
	scanf("%d %d", &qtdCirculos, &qtdTiros);
	
	int arrCirculos[qtdCirculos];
	for(int i = 0; i < qtdCirculos; i++) {
		scanf("%d", &arrCirculos[i]);
	}
	
	for(int j = 0; j < qtdTiros; j++) {
		int x, y;
		scanf("%d %d", &x, &y);
		int distAtual = ceil(sqrt((pow(x,2)) + (pow(y,2))));
		arrDistancias[distAtual]++;
	}
	
	long long result = 0;
	int circuloAnterior = -1;
	int index = qtdCirculos;

	for(int k = 0; k < index; k++) {
		long long soma = 0;
		int circuloAtual = arrCirculos[k];

		for(int l = circuloAnterior+1; l <= circuloAtual; l++) {
			soma += arrDistancias[l];
		}
		soma = soma * qtdCirculos;
		qtdCirculos--;
		result += soma;
		circuloAnterior = circuloAtual;
	}
	printf("%lld\n", result);
	return 0;
}