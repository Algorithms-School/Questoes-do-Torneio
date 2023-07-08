#include <bits/stdc++.h>

#define speed                   \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define MOD 1000000007

using namespace std;


int main()
{
  speed;
  ll qtd;
  cin >> qtd;

  while (qtd--)
  {
    string um, dois;
    cin >> um >> dois;

    if (um == "ataque" && dois == "pedra")
    {
      cout << "Jogador 1 venceu" << endl;
      continue;
    }
    if (um == "pedra" && dois == "papel")
    {
      cout << "Jogador 1 venceu" << endl;
      continue;
    }
    if (um == "ataque" && dois == "papel")
    {
      cout << "Jogador 1 venceu" << endl;
      continue;
    }
    if (um == "papel" && dois == "papel")
    {
      cout << "Ambos venceram" << endl;
      continue;
    }
    if (um == "pedra" && dois == "pedra")
    {
      cout << "Sem ganhador" << endl;
      continue;
    }
    if (um == "ataque" && dois == "ataque")
    {
      cout << "Aniquilacao mutua" << endl;
      continue;
    }

    cout << "Jogador 2 venceu" << endl;
  }

  return 0;
}
