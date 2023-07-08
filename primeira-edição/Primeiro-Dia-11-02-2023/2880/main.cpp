#include <iostream>
#define debug(message, x) // macro para depuração, não utilizada neste código

using namespace std;

int main(int argc, char **argv)
{
  string enigma;
  string crib;

  // leitura das strings enigma e crib
  cin >> enigma >> crib;

  int enigma_pointer = 0, crib_pointer=0, num_solucoes=0; 
  for (int i = 0; i <= enigma.size() - crib.size(); i++)
  {
    bool tem_sobreposicao = false;
    enigma_pointer = i;
    crib_pointer = 0;

    // percorre a string enigma a partir do índice i em busca de uma possível solução
    while(crib_pointer < crib.size()) {
      if(enigma[enigma_pointer] == crib[crib_pointer]) { // verifica se há sobreposição de caracteres entre enigma e crib
        tem_sobreposicao = true; // se houver, marca a flag tem_sobreposicao como verdadeira e para a busca
        break;
      }

      enigma_pointer++;
      crib_pointer++;
    }

    if(!tem_sobreposicao) { // se não houver sobreposição, incrementa o número de soluções
      num_solucoes++;
    }
  }

  cout << num_solucoes << endl; // imprime o número de soluções encontradas

  return 0;
}
