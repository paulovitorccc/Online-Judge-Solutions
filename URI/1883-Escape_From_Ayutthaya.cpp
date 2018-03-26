#include <bits/stdc++.h>

using namespace std;

#define MAXN 1000

queue<pair<char,pair<int,int> > > q;
int n,m;

void printG(char graph[MAXN][MAXN]){
	for(int i = 0 ; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%c", graph[i][j]);
		}
		printf("\n");
	}
}

bool isValid (int i, int j, int d, int dist[MAXN][MAXN], char graph[MAXN][MAXN]) {
	return (i >= 0  && i < n && j >= 0 && j < m && (dist[i][j] == -1 || dist[i][j] > d+1) && (graph[i][j] == '.' || graph[i][j] == 'E'));
}

void bfs (int dist[MAXN][MAXN], char graph[MAXN][MAXN]) {
	int x[8] = {-1,0,1,0};
	int y[8] = {0,1,0,-1};

	while (!q.empty()) {
		pair<char,pair<int,int> > u = q.front();
		q.pop();

		int front_i = u.second.first;
		int front_j = u.second.second;

		for (int k = 0; k < 4; k++) {
			int aux_i = front_i + x[k];
			int aux_j = front_j + y[k];
			if (isValid(aux_i,aux_j,dist[front_i][front_j],dist,graph)) {
                dist[aux_i][aux_j] = dist[front_i][front_j] + 1;
				graph[aux_i][aux_j] = u.first;
				q.push(make_pair(u.first,make_pair(aux_i,aux_j)));
			}
		}
	}
}

int main(){

    int casos;
    scanf("%d", &casos);
    for(int w = 0; w < casos; w++){

        int dist[MAXN][MAXN];
        char graph[MAXN][MAXN];

        scanf("%d %d", &n, &m);

        int saida_x, saida_y;

        for(int j = 0; j < n; j++){
            char linha[m];
            cin >> linha;
            for(int l = 0; l < m; l++){
                graph[j][l] = linha[l];
                dist[j][l] = -1;

                if(linha[l] == 'F'){
                    dist[j][l] = 0;
                    q.push(make_pair('F',make_pair(j,l)));
                }
                else if(linha[l] == 'E'){
                    saida_x = j;
                    saida_y = l;
                }

            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(graph[i][j] == 'S'){
                    dist[i][j] = 0;
                    q.push(make_pair('S',make_pair(i,j)));
                }
            }
        }

        bfs(dist,graph);

        if(graph[saida_x][saida_y] == 'F' || graph[saida_x][saida_y] == 'E'){
            printf("N\n");
        } else {
            printf("Y\n");
        }
    }


}
