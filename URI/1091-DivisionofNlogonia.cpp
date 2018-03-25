#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){

    while(true){
        int casos;
        scanf("%d", &casos);
        if(casos == 0){
            break;
        }

        int divisaX, divisaY;
        scanf("%d %d", &divisaX, &divisaY);

        for(int i = 0; i < casos; i++){
            int cordX, cordY;
            scanf("%d %d", &cordX, &cordY);

            if(cordX == divisaX || cordY == divisaY){
                printf("divisa\n");
            }
            else if(cordX > divisaX){
                if(cordY > divisaY){
                    printf("NE\n");
                } else {
                    printf("SE\n");
                }
            }
            else if(cordX < divisaX){
                if(cordY > divisaY){
                    printf("NO\n");
                } else {
                    printf("SO\n");
                }
            }

        }


    }
    system("pause");
    return 0;
}
