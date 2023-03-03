#include <iostream>
#include <string>

using namespace std;

int main() {
    string entrada;
    getline(cin, entrada);  // Lê a entrada como uma linha

    if (entrada.find("13") != string::npos) {  // Procura a string "13" na entrada
        cout << entrada << " es de Mala Suerte" << endl;  // Se encontrou, imprime que é de má sorte
    } else {
        cout << entrada << " NO es de Mala Suerte" << endl;  // Caso contrário, imprime que não é de má sorte
    }

    return 0;
}
