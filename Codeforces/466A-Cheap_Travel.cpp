#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int nPasseios, coberturaBilhete, precoBilhete, precoViagem;
    scanf("%d %d %d %d", &nPasseios, &coberturaBilhete, &precoBilhete, &precoViagem);
    float precoPorPassoSimples = precoBilhete;
    float precoPorPassoViagem = precoViagem / coberturaBilhete;
    int result = 0;
    if(precoPorPassoViagem < precoPorPassoSimples){
        int aux = nPasseios/coberturaBilhete;
        result = precoViagem * aux;
        if(precoViagem < ((nPasseios%coberturaBilhete) * precoBilhete)){
            result += precoViagem;
        } else {
            result += (nPasseios%coberturaBilhete) * precoBilhete;
        }
    } else {
        result = precoBilhete * nPasseios;
    }
    printf("%d", result);
    return 0;
}