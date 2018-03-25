#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
 
bool arr[1000000];
 
bool verificaPrimo(int num){
    bool result = true;
    int raiz = int(sqrt(num));
    for(int u = 2; u <= raiz; u++){
        if(arr[u]){
            if(num % u == 0){
                result = false;
                break;
            }
        }
    }
    return result;
}
 
int main()
{
    //crivo
    for(int i = 0; i < 1000000; i++){
        arr[i] = true;
    }
    arr[0] = false;
    arr[1] = false;
    for(int j = 0; j < 1000000; j++){
        if(arr[j]){
            for(int k = j+j; k < 1000000; k += j){
                arr[k] = false;
            }
        }
    }
 
 
    int casos;
    scanf("%d", &casos);
 
    for(int l = 0; l < casos; l++){
        int inf, sup;
        scanf("%d %d", &inf, &sup);
 
        int numAtual = inf;
        while(numAtual <= sup){
            if(numAtual < 1000000){
                if(arr[numAtual]){
                    printf("%d\n", numAtual);
                }
            } else {
                if(verificaPrimo(numAtual)){
                    printf("%d\n", numAtual);
                }
            }
            numAtual += 1;
        }
        printf("\n");
    }
 
 
}