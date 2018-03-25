#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int fatorial(int a){
    if(a == 1){
        return 1;
    } else {
        return a * fatorial(a-1);
    }
}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    if(a<b){
        printf("%d", fatorial(a));
    } else {
        printf("%d", fatorial(b));
    }


}