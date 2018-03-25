#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int caso = 1;
    while(true){
        int n, q;
        scanf("%d %d", &n, &q);
        if(n == 0 && q == 0){
            break;
        }
        int marbles[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &marbles[i]);
        }
        size_t size = sizeof(marbles) / sizeof(marbles[0]);
        sort(marbles, marbles + size);
        int elements[q];
        for(int j = 0; j < q; j++){
            scanf("%d", &elements[j]);
        }
        printf("CASE# %d:\n", caso);
        for(int k = 0; k < q; k++){
            int el = elements[k];
            if(el > marbles[n-1]){
                printf("%d not found\n", el);
            } else {
                int aux = -1;
                for(int l = 0; l < n; l++){
                    if(marbles[l] == el){
                        aux = l+1;
                        break;
                    }
                }
                if(aux == -1){
                    printf("%d not found\n", el);
                } else {
                    printf("%d found at %d\n", el, aux);
                }
            }
        }
        caso++;
    }
    return 0;
}
