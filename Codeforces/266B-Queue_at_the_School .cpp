#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int tam, t;
	scanf("%d %d", &tam, &t);
	char nome[tam];
	scanf("%s", &nome);

	while(t--){
	    int i = 0;
        while(i < tam){
            if(i+1 < tam && nome[i] == 'B' && nome[i+1] == 'G'){
                nome[i] = 'G';
                nome[i+1] = 'B';
                i++;
            }
        i++;
        }
	}
	cout << nome << endl;
	return 0;
}