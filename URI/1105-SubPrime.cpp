#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){

    while(true){

        int numBancos, numDebentures;
        scanf("%d %d", &numBancos, &numDebentures);
        if(numBancos == 0 && numDebentures == 0){
            break;
        }

        int bancos[numBancos];
        for(int i = 0; i < numBancos; i++){
            scanf("%d", &bancos[i]);
        }

        for(int j = 0; j < numDebentures; j++){
            int devedor, credor, qtd;
            scanf("%d %d %d", &devedor, &credor, &qtd);
            bancos[devedor - 1] -= qtd;
            bancos[credor - 1] += qtd;
        }

        bool aux = true;
        for(int k = 0; k < numBancos; k++){
            if(bancos[k] < 0){
                aux = false;
            }
        }

        if(aux){
            printf("S\n");
        } else {
            printf("N\n");
        }

    }

    return 0;
}
