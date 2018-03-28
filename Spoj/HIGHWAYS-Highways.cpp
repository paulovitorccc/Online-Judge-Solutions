#include <bits/stdc++.h>
#define MAXN 100005
#define INFINITO 10000000
 
using namespace std;
 
int dijkstra(int orig, int dest, int qtdV, vector<pair<int,int> > graph[MAXN]){
	int dist[MAXN];
	bool visitados[MAXN];
 
	//(distancia,vertice)
	priority_queue < pair<int, int>,
	vector<pair<int, int> >, greater<pair<int, int> > > pq;
 
	for(int i = 0; i <= qtdV; i++){
		dist[i] = INFINITO;
		visitados[i] = false;
	}
 
	dist[orig] = 0;
	pq.push(make_pair(dist[orig], orig));
 
	while(!pq.empty()){
 
		pair<int,int> p = pq.top();
		int u = p.second;
		pq.pop();
 
		if(!visitados[u]){
			visitados[u] = true;
 
			for(int k = 0; k < graph[u].size(); k++){
				int vert = graph[u][k].first;
				int custo_aresta = graph[u][k].second;
 
				if(dist[vert] > dist[u] + custo_aresta){
					dist[vert] = dist[u] + custo_aresta;
					pq.push(make_pair(dist[vert], vert));
				}
			}
		}
	}
 
	if(dist[dest] == INFINITO){
		return -1;
	} else {
		return dist[dest];
	}
 
}
 
int main(){
 
	int casos;
	scanf("%d", &casos);
 
	for(int j = 0; j < casos; j++){
 
		vector<pair<int,int> > graph[MAXN];
 
		int v, k, orig, des;
		scanf("%d %d %d %d", &v, &k, &orig, &des);
 
		int a, b, c;
		for(int i = 0; i < k; i++){
			scanf("%d %d %d", &a, &b, &c);
			graph[a].push_back(make_pair(b,c));
			graph[b].push_back(make_pair(a,c));	
		}
 
		int result = dijkstra(orig,des,v,graph);
		if(result == -1){
			printf("NONE\n");
		} else {
			printf("%d\n", result);
		}
 
	}
	
	return 0;
} 