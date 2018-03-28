#include <bits/stdc++.h>

using namespace std;

int soma[100000+1];
char arr[100000+1];

int main(){
  
	scanf("%s", &arr);

  if(arr[0] == arr[1]){
    soma[0] = 1;
  }
  for(int i = 0; i < 100000; i++){
    if(arr[i] == arr[i+1]){
      soma[i+1] = soma[i] + 1;
    } else {
      soma[i+1] = soma[i];
    }
  }
  
  int m;
  scanf("%d", &m);
  for(int j = 0; j < m; j++){
    int a, b;
    scanf("%d %d", &a, &b);
    a--;
    b--;
    printf("%d\n", soma[b] - soma[a]);
  }  

}