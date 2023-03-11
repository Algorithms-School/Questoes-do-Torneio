#include <iostream>

using namespace std;

int main()
{
    int n, contador=0;

    cin >> n;

    for(int i = 0; i<5; i++) {
      int entrada;
      cin >> entrada;
      if(entrada == n) contador++;
    }
    cout << contador << endl;
    return 0;
}