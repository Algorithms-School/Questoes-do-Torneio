#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignora o caractere '\n' após a leitura de n
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        stack<char> pilha;
        int diamantes = 0;
        for (char c : s) {
            if (c == '<') {
                pilha.push(c);
            } else if (c == '>' && !pilha.empty()) {
                pilha.pop();
                diamantes++;
            }
            // Ignora todos os outros caracteres
        }
        cout << diamantes << endl;
    }
    return 0;
}