#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    int x;
    while (cin >> x) {
        // mapa para armazenar as opções de presentes de cada participante
        map<string, vector<string>> opcoes_presentes;

        // ler as opções de presentes de cada participante
        for (int i = 0; i < x; i++) {
            string nome;
            vector<string> opcoes;
            cin >> nome;
            for (int j = 0; j < 3; j++) {
                string presente;
                cin >> presente;
                opcoes.push_back(presente);
            }
            opcoes_presentes[nome] = opcoes;
        }

        // realizar as consultas
        string nome, presente;
        while (cin >> nome >> presente) {
            // verificar se o presente está entre as opções do amigo secreto
            if (find(opcoes_presentes[nome].begin(), opcoes_presentes[nome].end(), presente) != opcoes_presentes[nome].end()) {
                cout << "Uhul! Seu amigo secreto vai adorar o/" << endl;
            }
            else {
                cout << "Tente Novamente!" << endl;
            }
        }
    }

    return 0;
}
