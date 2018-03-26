#include <bits/stdc++.h>
#define MAXN 10001
using namespace std;
 
int visited[MAXN];
vector<int> graph[MAXN];
 
int aux = 0;
 
void dfs (int v) {
    if (visited[v] == 1){
        aux = 1;
        return;
    }
    visited[v] = 1;
    for (int i = 0; i < graph[v].size(); i++) {
        dfs(graph[v][i]);
    }
}
 
int main(){
	int n, m;
    scanf("%d %d", &n , &m);
 
	for(int i = 0; i < m; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		graph[a].push_back(b);
	}
 
	dfs(1);
 
	for(int h = 1; h <= n; h++){
        if(visited[h] == 0){
            printf("%s\n", "NO");
            return 0;
        }
    }
 
	if(aux == 0){
		printf("%s\n", "YES");
	}
	else {
		printf("%s\n", "NO");
	}
	return 0;
}