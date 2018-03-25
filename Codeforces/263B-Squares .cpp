#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>



using namespace std;

int main()
{
   int qtdArray1, k;
   scanf("%d %d", &qtdArray1, &k);
   int array1[qtdArray1];
   for(int i = 0; i < qtdArray1; i++){
        scanf("%d", &array1[i]);
   }

    size_t size = sizeof(array1) / sizeof(array1[0]);
    sort(array1, array1 + size);

    int result;
    if(qtdArray1 < k){
        result = -1;
    } else {
        result = qtdArray1 - k;
    }

    if(result == -1){
        printf("%d", -1);
    } else {
        printf("%d %d", array1[result], 0);
    }




}
