#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){

    while(true){
        int casos;
        scanf("%d", &casos);
        if(casos == 0){
            break;
        }

        for(int i = 0; i < casos; i++){
            int alt1, alt2, alt3, alt4, alt5;
            scanf("%d %d %d %d %d", &alt1, &alt2, &alt3, &alt4, &alt5);
            int marcadas = 0;
            char letra;
            if(alt1 <= 127){
                marcadas++;
                letra = 'A';
            }
            if(alt2 <= 127){
                marcadas++;
                letra = 'B';
            }
            if(alt3 <= 127){
                marcadas++;
                letra = 'C';
            }
            if(alt4 <= 127){
                marcadas++;
                letra = 'D';
            }
            if(alt5 <= 127){
                marcadas++;
                letra = 'E';
            }

            if(marcadas == 1){
                printf("%c\n", letra);
            } else {
                printf("*\n");
            }

        }


    }
    system("pause");
    return 0;
}
