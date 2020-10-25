#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n, a, b, k;
		cin >> n >> a >> b >> k;
		long long x = n / a;
		long long y = n / b;
		long long lcm = (a * b) / __gcd(a, b);
		long long z = (n / lcm) * 2;	
		cout << ((x + y - z) >= k ? "Win" : "Lose") << '\n';
	}
	return 0;
}
