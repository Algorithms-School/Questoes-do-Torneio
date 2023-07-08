#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, int> potencia = {{2, 0}, {1, 1}, {0, 2}};

    const string GRITO = "caw caw";
    int gritos_corvo = 0, numero = 0;

    while (gritos_corvo != 3) {
        string entrada;
        getline(cin, entrada);

        if (entrada == GRITO) {
            cout << numero << endl;
            numero = 0;
            gritos_corvo++;
        } else {
            for (int i = 0; i < 3; i++) {
                if (entrada[i] == '*') {
                    numero += (1 << potencia[i]);
                }
            }
        }
    }

    return 0;
}