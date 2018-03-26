#include <bits/stdc++.h>

using namespace std;

int result = 0;

void dfs (int v, char *visited, vector<int> *graph) {
    if (visited[v]){
        return;
    }
    visited[v] = 1;
    result++;
    for (int i = 0; i < graph[v].size(); i++) {
        dfs(graph[v][i], visited, graph);
    }
}

int main(){
	int n, m;
    while (scanf("%d", &n) != EOF){
        result = 0;
        scanf("%d", &m);


        char visited[10001];
        vector<int> graph[10001];

        for(int g = 1; g <= n; g++){
            visited[g] = 0;
        }

        for(int i = 0; i < m; i++){
            int a, b;
            scanf("%d %d", &a, &b);
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        int tipo;
        scanf("%d", &tipo);
        dfs(tipo, visited, graph);

        printf("%d\n", result);
    }
	return 0;
}
