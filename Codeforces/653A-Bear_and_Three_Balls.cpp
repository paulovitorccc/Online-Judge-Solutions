#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>



using namespace std;

int pulaRepetidos(int arrayCP[], int sizeArray, int k){
    int result = k;
    while(result + 1 < sizeArray && arrayCP[result] == arrayCP[result + 1]){
        result += 1;
    }
    return result;
}

int main()
{
   int qtdArray1;
   scanf("%d", &qtdArray1);
   int array1[qtdArray1];
   for(int i = 0; i < qtdArray1; i++){
        scanf("%d", &array1[i]);
   }

    size_t size = sizeof(array1) / sizeof(array1[0]);
    sort(array1, array1 + size);

    int k = 0;
    bool aux = false;
   while(!aux){
        int k1 = pulaRepetidos(array1, qtdArray1, k);
        if(k1 + 1 >= qtdArray1){break;}
        int k2 = pulaRepetidos(array1, qtdArray1, k1 + 1);
        if(k2+1 >= qtdArray1){break;}
        int k3 = pulaRepetidos(array1, qtdArray1, k2 + 1);
        k = k1 + 1;


        int diferenca1e2 = abs(array1[k1] - array1[k2]);
        int diferenca1e3 = abs(array1[k1] - array1[k3]);
        int diferenca2e3 = abs(array1[k2] - array1[k3]);

        if(diferenca1e2 != 0 && diferenca1e3 != 0 && diferenca2e3 != 0){
            if(diferenca1e2 <= 2 && diferenca1e3 <= 2 && diferenca2e3 <= 2){
                aux = true;
            }
        }

        if(k3 == qtdArray1 - 1){
            break;
        }

   }

   if(aux){
        printf("YES");
   } else {
        printf("NO");
   }


}