#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
    int qtdMoedas;
    scanf("%d", &qtdMoedas);
    int moedas[qtdMoedas];
    for(int i = 0; i < qtdMoedas; i++){
        scanf("%d", &moedas[i]);
    }

    size_t size = sizeof(moedas) / sizeof(moedas[0]);
    sort(moedas, moedas + size);

    int arraySoma[qtdMoedas];
    int varAux = 0;
    for(int j = 0; j < qtdMoedas; j++){
        varAux += moedas[j];
        arraySoma[j] = varAux;
    }

    int cont = qtdMoedas - 1;
    int result;
    while(cont >= 0){
        if(cont == 0){
            result = qtdMoedas;
            break;
        }
        int moedasAtual = arraySoma[qtdMoedas - 1] - arraySoma[cont - 1];
        if(moedasAtual > arraySoma[cont - 1]){
            result = qtdMoedas - cont;
            break;
        }
        cont -= 1;
    }

    printf("%d", result);




}