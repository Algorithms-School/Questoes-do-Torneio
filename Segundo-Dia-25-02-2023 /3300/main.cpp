#include <iostream>
#include <string>

using namespace std;

int main() {
    string entrada;
    getline(cin, entrada);

    if (entrada.find("13") != string::npos) {
        cout << entrada << " es de Mala Suerte" << endl;
    } else {
        cout << entrada << " NO es de Mala Suerte" << endl;
    }

    return 0;
}