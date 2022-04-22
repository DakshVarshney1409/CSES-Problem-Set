#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	if (n == 2 || n == 3) {
		cout << "NO SOLUTION";
	}
	else if (n == 1) cout << 1;
	else {
		if (n % 2 == 0) {
			for (int i = 6; i <= n; i += 2) {
				cout << i << " ";
			}
		}
		else {
			for (int i = 6; i < n; i += 2) {
				cout << i << " ";
			}
		}
		cout << 2 << " " << 4 << " " << 1 << " " << 3 << " ";
		if (n % 2 == 0) {
			for (int i = 5; i < n; i += 2) {
				cout << i << " ";
			}
		}
		else {
			for (int i = 5; i <= n; i += 2) {
				cout << i << " ";
			}
		}
	}

	return 0;
}
