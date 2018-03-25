#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>


using namespace std;

int main()
{
   int qtdUnidades, arquivo;
   scanf("%d", &qtdUnidades);
   scanf("%d", &arquivo);
   int unidades[qtdUnidades];
   for(int i = 0; i < qtdUnidades; i++){
        scanf("%d", &unidades[i]);
   }

   size_t size = sizeof(unidades) / sizeof(unidades[0]);
   sort(unidades, unidades + size);

   int qtdUtilizada = 0;
   int cont = qtdUnidades - 1;
   while(arquivo > 0 && cont >= 0){
        arquivo -= unidades[cont];
        qtdUtilizada += 1;
        cont -= 1;
   }

   printf("%d", qtdUtilizada);


}