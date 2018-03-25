#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
   int casos;
   scanf("%d", &casos);
   int cartas[casos];

   for(int i = 0; i < casos; i++){
        scanf("%d", &cartas[i]);
   }

   int pointer1 = 0;
   int pointer2 = casos - 1;

   bool sereja = true;
   int somaSereja = 0;
   int somaDima = 0;
   while(pointer1 <= pointer2){

     int resultado;
     if(cartas[pointer1] > cartas[pointer2]){
       resultado = cartas[pointer1];
       pointer1 = pointer1 + 1;
     } else {
       resultado = cartas[pointer2];
       pointer2 = pointer2 - 1;
     }

     if(sereja){
       somaSereja += resultado;
       sereja = false;
     } else {
       somaDima += resultado;
       sereja = true;
     }

   }

   printf("%d %d", somaSereja, somaDima);

}