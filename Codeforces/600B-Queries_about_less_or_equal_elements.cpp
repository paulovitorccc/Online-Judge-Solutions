#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;


int PesquisaBinaria (int vet[], int chave, int Tam)
{
     int inf = 0;
     int sup = Tam-1;
     int meio;
     int resp = -1;
     while (inf <= sup)
     {
          meio = (inf + sup)/2;
          if (vet[meio] <= chave) {
                inf = meio + 1;
                resp = meio;
        }
        else if (vet[meio] > chave) {
            sup = meio - 1;
        }
     }
     return resp;
}



int main()
{

    int len1, len2;
    scanf("%d %d", &len1, &len2);
    int array1[len1];
    int array2[len2];

    for(int i = 0; i < len1; i++){
        scanf("%d", &array1[i]);
    }
    for(int j = 0; j < len2; j++){
        scanf("%d", &array2[j]);
    }

    size_t size = sizeof(array1) / sizeof(array1[0]);
    sort(array1, array1 + size);

    for(int k = 0; k < len2; k++){
        int result = PesquisaBinaria(array1,array2[k],len1);
        printf("%d ", result + 1);
    }
}