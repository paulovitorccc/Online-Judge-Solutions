#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){

    while(true){

        int lineInitial, columnInitial, lineEnd, columnEnd;
        scanf("%d %d %d %d", &lineInitial, &columnInitial, &lineEnd, &columnEnd);

        int lineAux = abs(lineInitial - lineEnd);
        int columnAux = abs(columnInitial - columnEnd);

        if(lineInitial == 0 || columnInitial == 0 || lineEnd == 0 || columnEnd == 0){
            break;
        }

        if(lineInitial == lineEnd && columnInitial == columnEnd){
            printf("0\n");
        }
        else if(lineAux == columnAux){
            printf("1\n");
        }
        else if(lineInitial == lineEnd || columnInitial == columnEnd){
            printf("1\n");
        }
        else {
            printf("2\n");
        }
    }

    return 0;
}
