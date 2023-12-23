#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

#define endl '\n'

typedef long long ll;
typedef pair<int, int> ii;

int main() {
  _

      ll n;
  cin >> n;
  ll sum = (n * (n + 1)) / 2;
  ll val = 0, aux = 0;

  for (int i = 0; i < n - 1; i++) {
    cin >> aux;
    val += aux;
  }

  cout << sum - val << endl;

  return 0;
}
