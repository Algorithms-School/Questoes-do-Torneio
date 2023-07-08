#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int n, m;
  while (true)
  {
    cin >> n >> m;
    if (n == 0 && m == 0)
    {
      break;
    }

    vector<int> bilhetes(m, 0);
    vector<int> bilhetesRepetidos;
    for (int i = 0; i < m; i++)
    {
      int b;
      cin >> b;

      bool achouNosBilhetes = find(bilhetes.begin(), bilhetes.end(), b) != bilhetes.end();
      bool foiAdicionado = find(bilhetesRepetidos.begin(), bilhetesRepetidos.end(), b) != bilhetesRepetidos.end();
      if (achouNosBilhetes && !foiAdicionado)
      {
        bilhetesRepetidos.push_back(b);
      }

      bilhetes.push_back(b);
    }

    cout << bilhetesRepetidos.size() << endl;
  }

  return 0;
}
