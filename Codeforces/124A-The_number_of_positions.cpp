#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    if(n-(b+a) > 0){
        printf("%d", b + 1);
    } else {
        printf("%d", n - a);
    }


    return 0;
}