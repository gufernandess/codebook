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

  if (n == 2 || n == 3)
    cout << "NO SOLUTION" << endl;

  else {
    for (int i = 1; i <= n; i++) {
      if (i % 2 == 0) cout << i << " ";
    }

    for (int i = 1; i <= n; i++) {
      if (i % 2 != 0) cout << i << " ";
    }

    cout << "1" << endl;
  }

  return 0;
}
