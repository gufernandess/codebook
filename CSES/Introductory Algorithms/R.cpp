#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

#define endl '\n'

int main() {
  _

      string s;
  cin >> s;
  int ans = -1, aux = 0;
  char c = s[0];

  for (int i = 0; i < s.size(); i++) {
    if (c == s[i]) {
      aux++;
    }

    else {
      c = s[i];
      aux = 1;
    }

    if (aux > ans) ans = aux;
  }

  cout << ans << endl;

  return 0;
}
