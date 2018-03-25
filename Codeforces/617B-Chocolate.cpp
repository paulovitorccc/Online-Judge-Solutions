#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int qtd;
    scanf("%d", &qtd);
    int numeros[qtd];
    for (int i = 0; i < qtd; i++){
        scanf("%d", &numeros[i]);
    }

    int index = 0;
    while(index < qtd && numeros[index] == 0){
        index += 1;
    }

    int cont = 0;
    long long result = 0;
    while(index < qtd){
        if(numeros[index] == 1){
            if(result == 0){
                result = 1;
            }
            result = result * (cont + 1);
            cont = 0;
        }
        else if(numeros[index] == 0){
            cont += 1;
        }
        index += 1;
    }
    cout << result << endl;
    return 0;
}