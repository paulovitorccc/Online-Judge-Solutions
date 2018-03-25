#include <iostream>
#include <stack>


using namespace std;

int main()
{
    while(true){
        int qtd;
        cin >> qtd;
        if(qtd == 0){
            break;
        }
        while(true){
            int iniciar;
            cin >> iniciar;
            if(iniciar == 0){
                    cout << "" << endl;
                break;
            }

            stack<int> pilha1;
            stack<int> pilha2;
            stack<int> pilha3;
            pilha1.push(iniciar);
            for(int i = 1; i < qtd; i++){
                int el;
                cin >> el;
                pilha1.push(el);
            }

            while(!pilha1.empty()){
                int aux = pilha1.top();
                pilha1.pop();
                while(!pilha2.empty() && pilha2.top() > aux){
                    int ele = pilha2.top();
                    pilha2.pop();
                    pilha3.push(ele);
                }
                pilha2.push(aux);
            }

            while(!pilha2.empty()){
                int valor = pilha2.top();
                pilha2.pop();
                pilha3.push(valor);
            }

            int index = 1;
            bool result = true;
            while(!pilha3.empty()){
                int saida = pilha3.top();
                pilha3.pop();
                if(saida != index){
                    result = false;
                    break;
                }
                index++;
            }
            if(result){
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
