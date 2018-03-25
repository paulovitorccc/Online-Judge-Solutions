#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int passos;
    scanf("%d", &passos);
    int result = passos / 5;
    if((passos % 5) > 0){
        result += 1;
    }
    printf("%d", result);
    return 0;
}