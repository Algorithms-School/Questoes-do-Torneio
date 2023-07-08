#include <iostream>

using namespace std;

int main()
{
  int diaEntregue, diaRevisao;
  cin >> diaEntregue >> diaRevisao;

  if (diaEntregue > diaRevisao)
  {
    cout << "Eu odeio a professora!" << endl;
    return 0;
  }

  if (diaEntregue + 3 <= diaRevisao)
  {
    cout << "Muito bem! Apresenta antes do Natal!" << endl;
    return 0;
  }
  else
  {
    cout << "Parece o trabalho do meu filho!" << endl;
  }

  if (diaRevisao + 2 <= 24)
  {
    cout << "TCC Apresentado!" << endl;
  }
  else
  {
    cout << "Fail! Entao eh nataaaaal!" << endl;
  }

  return 0;
}
