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

      long long n;
  cin >> n;

  cout << n << ' ';

  if (n != 1) {
    while (n != 2) {
      n % 2 == 0 ? n = n / 2 : n = 3 * n + 1;
      cout << n << ' ';
    }
    cout << 1 << endl;
  }

  return 0;
}
