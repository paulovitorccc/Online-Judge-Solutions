#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

   int casos, tempo;
   scanf("%d %d", &casos, &tempo);
   int livros[casos];

   for(int i = 0; i < casos; i++){
        scanf("%d", &livros[i]);
   }

   int arraySoma[casos];
   int soma = 0;
   for(int j = 0; j < casos; j++){
        soma += livros[j];
        arraySoma[j] = soma;
   }

   int qtdLidos = 0;
   int sup = 0;
   int inf = 0;
   while(sup >= inf && sup < casos){
        int result;
        if(inf - 1 < 0){
            result = arraySoma[sup];
        } else {
            result = arraySoma[sup] - arraySoma[inf - 1];
        }
        if(sup == inf && result > tempo){
            sup += 1;
            inf += 1;
        }
        else if(result > tempo){
            inf += 1;
        }
        else if(result <= tempo){
            int novaQtdLidos = (sup - inf) + 1;
            if(novaQtdLidos > qtdLidos){
                qtdLidos = novaQtdLidos;
            }
            sup += 1;
        }
   }


   printf("%d", qtdLidos);

}