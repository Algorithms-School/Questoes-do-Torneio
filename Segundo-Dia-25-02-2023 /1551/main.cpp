#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num_testes;
    cin >> num_testes;
    getchar();

    while(num_testes) {
        string frase;
        getline(cin, frase);

        vector<bool> alfabeto(26, false);
        for(auto letra:frase) {
            if(isalpha(letra)) {
                alfabeto[letra - 'a'] = true;
            }
        }

        int qtd_letras = count(alfabeto.begin(), alfabeto.end(), true);

        if(qtd_letras == 26) {
            cout << "frase completa" << endl;
        } else if(qtd_letras >= 13) {
            cout << "frase quase completa" << endl;
        } else {
            cout << "frase mal elaborada" << endl;
        }

        --num_testes;
    }

    return 0;
}