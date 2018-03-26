#include <bits/stdc++.h>

using namespace std;

#define MAXN 101

int dist[MAXN][MAXN];
char graph[MAXN][MAXN];
int n,m;

void printG(){
	for(int i = 0 ; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%c", graph[i][j]);
		}
		printf("\n");
	}
}

bool isValid (int i, int j, int d) {
	return (i >= 0  && i < n && j >= 0 && j < m && (dist[i][j] == -1 || dist[i][j] > d+1));
}

void bfs (int i, int j) {
	queue<pair<char,pair<int,int> > > q;
	int x[8] = {-1,0,1,0};
	int y[8] = {0,1,0,-1};

	dist[i][j] = 0;

	q.push(make_pair('B',make_pair(i,j)));

	while (!q.empty()) {
		pair<char,pair<int,int> > u = q.front();
		q.pop();

		int front_i = u.second.first;
		int front_j = u.second.second;

        if(graph[front_i][front_j] == '.'){
            graph[front_i][front_j] = u.first;
        }

		char letra_aux;
		if (u.first == 'B'){
			letra_aux = 'W';
		} else {
			letra_aux = 'B';
		}

		for (int k = 0; k < 4; k++) {
			int aux_i = front_i + x[k];
			int aux_j = front_j + y[k];
			if (isValid(aux_i,aux_j,dist[front_i][front_j])) {
                dist[aux_i][aux_j] = dist[front_i][front_j] + 1;
				q.push(make_pair(letra_aux,make_pair(aux_i,aux_j)));
			}
		}
	}
}

int main(){

	scanf("%d %d", &n, &m);

	for(int j = 0; j < n; j++){
		char linha[m];
		cin >> linha;
		for(int l = 0; l < m; l++){
			graph[j][l] = linha[l];
			dist[j][l] = -1;
		}
	}

	bfs(0,0);

	printG();

}