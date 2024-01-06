#include <bits/stdc++.h>

using namespace std;

#define _                       \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);

#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

#define pb push_back
#define eb emplace_back

#define endl '\n'

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef map<int, int> mii;

int main() {
  _

      long long n;
  cin >> n;

  long long aux = 0, prev = 1;

  for (long long i = 1; i <= n; i++) {
    if (i == 1) {
      cout << 0 << endl;
    }

    else {
      cout << ((i * i * ((i * i) - 1)) / 2) - aux << endl;
      aux = aux + (8 * prev);
      prev++;
    }
  }

  return 0;
}
