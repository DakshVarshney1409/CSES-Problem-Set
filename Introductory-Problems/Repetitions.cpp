#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = s.length();
	int count_ = 1, ans = 1;
	for (int i = 1; i < n; i++) {
		if (s[i] == s[i - 1]) {
			count_++;
			ans = max(count_, ans);
		}
		else {
			ans = max(count_, ans);
			count_ = 1;
		}
	}
	cout << ans;
	return 0;
}
