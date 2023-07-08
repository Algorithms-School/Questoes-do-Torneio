#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  int num_leds=0, num_casos; // Variáveis para armazenar o número de LEDs e o número de casos
  cin >> num_casos; // Solicita ao usuário o número de casos a serem testados
  for(int teste=0;teste<num_casos;++teste) { // Loop para cada caso a ser testado
      string numero;
      cin >> numero; // Solicita ao usuário o número a ser testado

  for(auto digito:numero) { // Loop para cada dígito do número
      // Condições para somar a quantidade de LEDs necessários para exibir cada dígito
      if(digito == '1')
          num_leds += 2;
      if(digito == '2')
          num_leds += 5;
      if(digito == '3')
          num_leds += 5;
      if(digito == '4')
          num_leds += 4;
      if(digito == '5')
          num_leds += 5;
      if(digito == '6')
          num_leds += 6;
      if(digito == '7')
          num_leds += 3;
      if(digito == '8')
          num_leds += 7;
      if(digito == '9')
          num_leds += 6;
      if(digito == '0')
          num_leds += 6;
  }
  cout << num_leds << " leds" << endl; // Exibe a quantidade total de LEDs necessários para exibir o número
  num_leds = 0; // Reinicia a contagem de LEDs para o próximo caso
}
return 0;
}