#include <iostream>
#define debug(message, x) 

using namespace std;

int main(int argc, char **argv)
{
  string enigma;
  string crib;

  cin >> enigma >> crib;

  int enigma_pointer = 0, crib_pointer=0, num_solucoes=0; 
  for (int i = 0; i <= enigma.size() - crib.size(); i++)
  {
    bool tem_sobreposicao = false;
    enigma_pointer = i;
    crib_pointer = 0;

    while(crib_pointer < crib.size()) {
      if(enigma[enigma_pointer] == crib[crib_pointer]) {
        tem_sobreposicao = true;
        break;
      }

      enigma_pointer++;
      crib_pointer++;
    }

    if(!tem_sobreposicao) {
      num_solucoes++;
    }
  }

  cout << num_solucoes << endl;

  return 0;
}