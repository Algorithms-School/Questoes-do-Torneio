#include <iostream>
#include <queue>

using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;
        queue<int> cartas;
        for (int i = 1; i <= n; i++) {
            cartas.push(i);
        }
        cout << "Discarded cards:";
        while (cartas.size() >= 2) {
            cout << " " << cartas.front();
            cartas.pop();
            int carta = cartas.front();
            cartas.pop();
            if (!cartas.empty()) cout << ",";
            cartas.push(carta);
        }
        cout << endl << "Remaining card: " << cartas.front() << endl;
    }
    return 0;
}

/* criamos uma fila com as cartas de 1 até n, descartamos a carta do
 topo (front) e movemos a próxima carta (front) para o final da fila. 
Repetimos este processo até termos apenas uma carta na fila. 
A cada descarte de carta, imprimimos o número da carta e uma vírgula
 (exceto na última carta descartada). Finalmente, imprimimos o número 
da carta remanescente.*/