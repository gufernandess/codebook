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
  vector<long long> v(n, -1);
  long long ans = 0;

  for (int i = 0; i < n; i++) cin >> v[i];

  for (int i = 1; i < n; i++) {
    if (v[i] < v[i - 1]) {
      ans += v[i - 1] - v[i];
      v[i] += v[i - 1] - v[i];
    }
  }

  cout << ans << endl;

  return 0;
}
