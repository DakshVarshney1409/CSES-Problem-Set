#include <algorithm>
#include <iostream>
#include <vector>
#define MOD 1000000007

using namespace std;

int main() {
	int n;
	cin>>n;
	int ans=1;

    for (int i = 0; i < n; i++) {
        ans=ans<<1;
        ans %= MOD;
    }
    cout << ans;

	return 0;
}
