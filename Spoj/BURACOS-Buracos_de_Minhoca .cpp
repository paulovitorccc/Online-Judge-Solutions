#include <bits/stdc++.h>
#define MAXN 3005
using namespace std;
 
int visited[MAXN];
 
int contD;
 
void dfs (int v, vector<int> graph[MAXN]) {
    if (visited[v]){
        return;
    }
    visited[v] = 1;
    contD++;
    for (int i = 0; i < graph[v].size(); i++) {
        dfs(graph[v][i], graph);
    }
}
 
int main(){
	int n, m;
 	int cont = 1;
 	while(true){
 		scanf("%d %d", &n , &m);
 		if(n == 0 && m == 0){
 			break;
 		}
 		
 		vector<int> graph[MAXN];
		vector<int> graphInvertid[MAXN];
 
	 	for(int i = 0; i < m; i++){
			int a, b;
			scanf("%d %d", &a, &b);
			graph[a].push_back(b);
			graphInvertid[b].push_back(a);
		}
 
		contD = 0;
		for (int k = 0; k <= n + 1; k++) visited[k] = 0;
		dfs(1, graph);
		if(contD == n){
			contD = 0;
			for (int k = 0; k <= n + 1; k++) visited[k] = 0;
			dfs(1,graphInvertid);
			if(contD == n){
				printf("Teste %d\n", cont);
				printf("S\n");
			} else {
				printf("Teste %d\n", cont);
				printf("N\n");
			}
		} else {
			printf("Teste %d\n", cont);
			printf("N\n");
		}
		printf("\n");
		cont++;
 	}
	return 0;
} 