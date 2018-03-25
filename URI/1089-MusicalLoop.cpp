#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{

    while(true){
        int qtdAmostras;
        scanf("%d", &qtdAmostras);
        if(qtdAmostras == 0){
            break;
        }

        int amostras[qtdAmostras];
        for(int i = 0; i < qtdAmostras; i++){
            scanf("%d", &amostras[i]);
        }

        int picos = 0;
        for(int j = 0; j < qtdAmostras; j++){
            int amostraAtual = amostras[j];
            int amostraAnterior;
            if(j == 0){
                amostraAnterior = amostras[qtdAmostras - 1];
            } else {
                amostraAnterior = amostras[(j-1) % qtdAmostras];
            }
            int amostraPosterior = amostras[(j+1) % qtdAmostras];
            if(amostraAnterior > amostraAtual && amostraPosterior > amostraAtual){
                picos++;
            }
            if(amostraAnterior < amostraAtual && amostraPosterior < amostraAtual){
                picos++;
            }
        }
        printf("%d\n", picos);
    }
    return 0;
}
