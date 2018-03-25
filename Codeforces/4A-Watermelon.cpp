#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int peso;
    scanf("%d", &peso);
    int metadeMaior = peso / 2;
    int metadeMenor = peso / 2;

    if((peso % 2) != 0){
        metadeMaior++;
    }
    bool log = false;
    while(metadeMaior > 1 && (log == false)){
        if(((metadeMaior % 2) == 0) && ((metadeMenor % 2) == 0)){
            log = true;
        } else {
            metadeMaior--;
            metadeMenor++;
        }
    }
    

    if(log){
       printf("YES");
    } else {
        printf("NO");
    }

}