#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {

  ll n;

  cin >> n;

  cout << (((n * (1 + n))/ 2) % 2) << endl;

  return 0;
}