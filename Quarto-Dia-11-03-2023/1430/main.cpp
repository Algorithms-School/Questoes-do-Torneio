#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string composition;
    map<char, int> noteDuration = {
        {'W', 64},
        {'H', 32},
        {'Q', 16},
        {'E', 8},
        {'S', 4},
        {'T', 2},
        {'X', 1}
    };
    while (getline(cin, composition)) { // lê a composição enquanto houver entrada
        if (composition == "*") break; // interrompe o loop se encontrar o caractere '*'
        
        int correct = 0; // contador de compassos com a duração correta
        for (int i = 1; i < composition.size() - 1;) { // loop pelos compassos
            int duration = 0; // duração do compasso atual
            while (composition[i] != '/') { // loop pelas notas do compasso
                duration += noteDuration.at(composition[i]); // adiciona a duração da nota atual
                ++i; // passa para a próxima nota
            }
            ++i; // passa para o próximo compasso
            if (duration == 64) ++correct; // incrementa o contador se o compasso tem duração 1
        }
        cout << correct << endl; // imprime a resposta
    }
    return 0;
}
