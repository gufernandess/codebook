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

      ll n;
  cin >> n;
  vector<ll> v;

  for (ll i = 1; i <= n; i++) v.push_back(i);

  ll sum = ((n * n) + n) / 2;

  if (sum % 2 != 0)
    cout << "NO" << endl;

  else {
    vector<ll> v_2;
    ll aux = 0;
    ll div = sum / 2;

    for (ll i = n - 1; i >= 0; i--) {
      if (aux + v[i] <= div) {
        aux = aux + v[i];
        v_2.pb(v[i]);
        v.erase(v.begin() + i);
      }
    }

    cout << "YES" << endl;

    cout << v.size() << endl;
    for (ll el : v) cout << el << " ";

    cout << endl;

    cout << v_2.size() << endl;
    for (ll el : v_2) cout << el << " ";
  }

  return 0;
}
