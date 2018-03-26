#include <bits/stdc++.h>

using namespace std;
 

int graph[101][101];
int dist[101][101];
int n,m,maior;

bool isValid (int i, int j, int d) {
	return (i >= 0  && i < n && j >= 0 && j < m && (dist[i][j] == -1 || dist[i][j] > d+1) && graph[i][j] == 1);
}

void bfs (int i, int j) {
	queue<pair<int,int> > q;
	int x[8] = {0,0,1,-1, -1, 1, -1, 1};
	int y[8] = {-1,1,0,0, 1, 1, -1,-1};

	dist[i][j] = 0;

	q.push(make_pair(i,j));

	while (!q.empty()) {
		pair<int,int> u = q.front();
		q.pop();

		int front_i = u.first;
		int front_j = u.second;

		for (int k = 0; k < 8; k++) {
			int aux_i = front_i + x[k];
			int aux_j = front_j + y[k];
			if (isValid(aux_i,aux_j,dist[front_i][front_j])) {
				dist[aux_i][aux_j] = dist[front_i][front_j] + 1;
				if (dist[aux_i][aux_j] > maior) maior = dist[aux_i][aux_j];
				q.push(make_pair(aux_i,aux_j));
			}
		}
	}
}

int main(){
	int casos;
	scanf("%d", &casos);

	for(int i = 0; i < casos; i++){
		
		scanf("%d %d", &n, &m);
		for(int j = 0; j < n; j++){
			for(int l = 0; l < m; l++){
				scanf("%d", &graph[j][l]);
				dist[j][l] = -1;
			}
		}

		int l_init, c_init;
		scanf("%d %d", &l_init, &c_init);
		bfs(l_init-1, c_init-1);

		printf("%d\n", maior);
		maior = 0;
	}
}