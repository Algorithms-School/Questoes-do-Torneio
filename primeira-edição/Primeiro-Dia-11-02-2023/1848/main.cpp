#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    // Cria um dicionário para mapear as potências de 2.
    unordered_map<int, int> potencia = {{2, 0}, {1, 1}, {0, 2}};

    // Define a string que os corvos usam para se comunicar.
    const string GRITO = "caw caw";

    // Inicializa as variáveis.
    int gritos_corvo = 0, numero = 0;

    // Continua lendo a entrada até que três gritos de corvo tenham sido ouvidos.
    while (gritos_corvo != 3) {
        string entrada;
        getline(cin, entrada);

        // Se ouvimos o grito "caw caw", significa que um corvo terminou de contar.
        if (entrada == GRITO) {
            cout << numero << endl;
            numero = 0;
            gritos_corvo++;
        } else {
            // Se não, precisamos decodificar o número que o corvo está contando.
            for (int i = 0; i < 3; i++) {
                if (entrada[i] == '*') {
                    // Usa a potência de 2 apropriada para calcular o valor do bit atual.
                    numero += (1 << potencia[i]);
                }
            }
        }
    }

    return 0;
}
