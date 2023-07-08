#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<char> alfabeto;
    for (char c = 'A'; c <= 'Z'; c++) {
        alfabeto.push_back(c);
    }

    int num_testes;
    cin >> num_testes;

    for (int i = 0; i < num_testes; i++) {
        string cifra;
        int num_casas;
        cin >> cifra >> num_casas;
        num_casas %= alfabeto.size();

        for (char letra : cifra) {
            int pos = (letra - 'A' - num_casas + alfabeto.size()) % alfabeto.size();
            cout << alfabeto[pos];
        }

        cout << endl;
    }

    return 0;
}