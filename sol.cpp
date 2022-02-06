#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> b(n);
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		// all the smaller elements should be in A and all the larger elements should be in B
		for (int i = 0; i < n; i++) {
			if (a[i] > b[i]) {
				swap(a[i], b[i]);
			}
		}
		cout << *max_element(a.begin(), a.end()) * *max_element(b.begin(), b.end()) << '\n';
	}
	return 0;
}
