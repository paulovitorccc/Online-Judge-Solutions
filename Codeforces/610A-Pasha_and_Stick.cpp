#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int num;
    scanf("%d", &num);
    if(num % 2 != 0){
        printf("%d", 0);
    } else {
        int a = 1;
        int b = (num/2) - 1;
        int result = 0;
        while(b > a){
            result += 1;
            b -= 1;
            a += 1;
        }
        printf("%d", result);   
    }

}