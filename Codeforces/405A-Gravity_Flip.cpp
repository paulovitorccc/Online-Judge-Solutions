#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>


using namespace std;

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

   for(int k = 0; k < qtdArray1; k++){
        printf("%d ", array1[k]);
   }




}