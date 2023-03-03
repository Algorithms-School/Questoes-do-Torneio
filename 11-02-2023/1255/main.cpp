#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Função que recebe uma string e retorna uma versão em minúsculas da mesma
string minuscula(string frase) {
    string retorno;

    for(auto x:frase) {
        retorno += tolower(x);
    }

    return retorno;
}

int main(int argc, char* argv[]) {
    int num_frases;
    cin >> num_frases;

    getchar(); // Consumir o caractere de quebra de linha após a entrada do número de frases

    while(num_frases) {
        vector<int> letras(26, 0); // Vetor com 26 posições, inicializado com 0 em todas as posições
        string frase;

        getline(cin, frase);

        frase = minuscula(frase); // Converter a frase para minúsculas
        for(auto letra:frase) { // Para cada letra na frase
            if(isalpha(letra)) { // Verificar se a letra é uma letra do alfabeto
                letras[letra - 'a']++; // Incrementar a contagem da letra correspondente no vetor
            }
        }

        int maior = letras[0]; // Inicializar a contagem da maior letra como a contagem da primeira letra do alfabeto
        string saida;
        for(int i=0;i<letras.size();++i) { // Para cada letra do alfabeto
            if(letras[i] == maior) { // Se a contagem for igual à maior contagem encontrada até o momento
                saida += i + 'a'; // Adicionar a letra correspondente à string de saída
            }
            if(letras[i] > maior) { // Se a contagem for maior que a maior contagem encontrada até o momento
                saida = i + 'a'; // Atualizar a string de saída com a letra correspondente
                maior = letras[i]; // Atualizar a maior contagem
            }
        }

        cout << saida << endl; // Imprimir a letra (ou letras) com a maior contagem na frase

        --num_frases;
    }

    return 0;
}
