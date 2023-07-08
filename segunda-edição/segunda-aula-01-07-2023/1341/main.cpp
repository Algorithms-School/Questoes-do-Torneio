#include <bits/stdc++.h>

#define speed                   \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
#define MOD 1000000007

using namespace std;
typedef long long ll;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;

#define lll long long int
#define pb push_back
#define pf push_front
#define endl "\n"
#define f first
#define s second

ll lcs(string X, string Y, ll m, ll n)
{
  // Initializing a matrix of size (m+1)*(n+1)
  ll L[m + 1][n + 1];

  // Following steps build L[m+1][n+1] in bottom up
  // fashion. Note that L[i][j] contains length of LCS of
  // X[0..i-1] and Y[0..j-1]
  for (ll i = 0; i <= m; i++)
  {
    for (ll j = 0; j <= n; j++)
    {
      if (i == 0 || j == 0)
        L[i][j] = 0;

      else if (X[i - 1] == Y[j - 1])
        L[i][j] = L[i - 1][j - 1] + 1;

      else
        L[i][j] = max(L[i - 1][j], L[i][j - 1]);
    }
  }

  // L[m][n] contains length of LCS for X[0..n-1]
  // and Y[0..m-1]
  return L[m][n];
}

string pegarCaminho(vector<string> &grade)
{
  string caminho;

  ll n;
  pll coordenada;

  cin >> n >> coordenada.f >> coordenada.s;
  cin.ignore();

  string coordenadas;
  getline(cin, coordenadas);

  coordenada.f--;
  coordenada.s--;

  caminho += grade[coordenada.f][coordenada.s];

  for (auto c : coordenadas)
  {
    if (c == 'N')
    {
      coordenada.f--;
    }
    else if (c == 'S')
    {
      coordenada.f++;
    }
    else if (c == 'E')
    {
      coordenada.s++;
    }
    else if (c == 'W')
    {
      coordenada.s--;
    }

    caminho += grade[coordenada.f][coordenada.s];
  }

  return caminho;
};

int main()
{
  speed;
  ll qtd, casos = 1;
  cin >> qtd;

  while (qtd--)
  {
    ll qtd_grade, N;
    cin >> qtd_grade >> N;
    cin.ignore();

    vector<string> grade(qtd_grade);

    for (int i = 0; i < qtd_grade; i++)
    {
      string g;
      getline(cin, g);
      grade[i] = g;
    }

    string primeira_crianca = pegarCaminho(grade);
    string segunda_crianca = pegarCaminho(grade);

    ll m = primeira_crianca.size();
    ll n = segunda_crianca.size();

    ll ans = lcs(primeira_crianca, segunda_crianca, m, n);

    cout << "Case " << casos << ": ";
    cout << m - ans << " " << n - ans << endl;
    casos++;
  }

  return 0;
}
