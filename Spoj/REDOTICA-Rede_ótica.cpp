#include <stdio.h>
#include <stdlib.h>
 
#define INF 10000
#define maxE 101
#define maxArr 500000
#define maxV 102
 
 
int gredy[102][102];
int N, M;
int parent[102];
 
void arvoreMinima() {
    int arr[maxV], v0,w,aux[maxV],i,minArr;
 
    for (w =1; w <=N; w++)
    {
        arr[w] = maxArr;
    }
 
    v0 = 1;
    
    aux[v0] = v0;
    arr[v0] = 0.0;
    while (true) {
 
        minArr = maxArr;
 
        for (w =1; w <=N; w++)
            if (parent[w] == -1 && minArr > arr[w])
            {
                v0=w;
                minArr = arr[v0];
             }
 
      if (minArr == maxArr) break;
      
      parent[v0] = aux[v0];
      for (w = 1; w <=N; w++)
         if (parent[w] == -1 && arr[w] > gredy[v0][w]) {
            arr[w] = gredy[v0][w];
            aux[w] = v0;
         }
    }
}
 
int main() {
    int i,j;
    int x,y,z;
    int teste=1;
 
    scanf("%d%d",&N,&M);
    while(N != 0) {
        
        for(i=1;i<=N;i++)
            for(j=1;j<=N;j++)
            {
                gredy[i][j]=maxArr;
                parent[j]=-1;
            }
        
        for(i=0;i<M;i++)
        {
            scanf("%d%d%d",&x,&y,&z);
            gredy[x][y]=z;
            gredy[y][x]=z;
        }
 
        arvoreMinima();
 
        printf("Teste %d\n",teste);
 
        for(i=2;i<=N;i++) {
               if(parent[i]<i)
                  printf("%d %d\n",parent[i],i);
               else
                  printf("%d %d\n",i,parent[i]);
        }
 
        printf("\n");
        
		teste++;
       
		scanf("%d%d",&N,&M);
    }
 
    return 0;
 
} 