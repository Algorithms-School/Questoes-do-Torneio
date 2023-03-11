#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  vector<char> alfabeto; // Declaração de um vetor que irá armazenar as letras do alfabeto
  for (char c = 'A'; c <= 'Z'; c++)
  { // Loop para adicionar as letras do alfabeto ao vetor
    alfabeto.push_back(c);
  }

  int num_testes;
  cin >> num_testes; // Solicita ao usuário o número de testes a serem realizados

  for (int i = 0; i < num_testes; i++)
  {                               // Loop para cada teste a ser realizado
    string cifra;                 // Variável para armazenar a cifra a ser descriptografada
    int num_casas;                // Variável para armazenar o número de casas a serem deslocadas
    cin >> cifra >> num_casas;    // Solicita ao usuário a cifra e o número de casas a serem deslocadas
    num_casas %= alfabeto.size(); // Garante que o número de casas a serem deslocadas seja menor que o tamanho do alfabeto

    for (char letra : cifra)
    {                                                                          // Loop para cada letra da cifra
      int pos = (letra - 'A' - num_casas + alfabeto.size()) % alfabeto.size(); // Calcula a posição da letra descriptografada
      cout << alfabeto[pos];                                                   // Exibe a letra descriptografada
    }

    cout << endl; // Pula uma linha para a próxima cifra
  }

  return 0;
}