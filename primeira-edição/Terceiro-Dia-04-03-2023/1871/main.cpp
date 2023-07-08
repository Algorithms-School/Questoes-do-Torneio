#include <iostream>
#include <string>

using namespace std;

// Função para remover os zeros de uma string
string removeZeros(string s) {
    string novaString = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '0') {
            novaString += s[i];
        }
    }
    return novaString;
}

int main() {
    int m, n;

    while (true) {
        cin >> m >> n;

        if (m == 0 && n == 0) {
            break;
        }

        // Transforma os inteiros em strings e remove os zeros
        string strM = removeZeros(to_string(m));
        string strN = removeZeros(to_string(n));

        // Calcula a soma e remove os zeros do resultado
        int soma = stoi(strM) + stoi(strN);
        string strSoma = removeZeros(to_string(soma));

        // Imprime o resultado
        cout << strSoma << endl;
    }

    return 0;
}

/* A ideia é ler os números inteiros, transformá-los em 
strings e remover os zeros de cada uma das strings. Em seguida, realiza
 a soma dos números (sem os zeros) e novamente remove os zeros do resultado. 
Por fim, imprime o resultado. O programa continua lendo e processando casos 
de teste até que os valores de entrada sejam iguais a 0.*/