#include <iostream>
#include <queue>
 
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int qtd;
    cin >> qtd;
    queue<int> fila;
    for(int i = 0; i < qtd; i++){
        int num;
        cin >> num;
        if(num == 1){
            int valor;
            cin >> valor;
            fila.push(valor);
        }
        else if (num == 2){
            if(!fila.empty()){
                fila.pop();
            }
        }
        else if (num == 3){
            if(fila.empty()){
                cout << "Empty!" << endl;
            }
            else {
                cout << fila.front() << endl;
            }
        }
    }
    return 0;
}