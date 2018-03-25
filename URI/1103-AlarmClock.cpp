#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    while(true){
        int h1, m1, h2, m2;
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){
            break;
        }

        if(h1 == h2){
            int aux = m2 - m1;
            if(aux < 0){
                aux = 1380;
                aux += 60 - m1;
                aux += m2;
            }
            printf("%d\n", aux);
        } else {
            int auxH = h2 - h1;
            if(auxH < 0){
                auxH += 24;
                auxH = auxH * 60;
                auxH += m2 - m1;
            } else {
                auxH = auxH * 60;
                auxH += m2 - m1;
            }
            printf("%d\n", auxH);
        }

    }
    return 0;
}