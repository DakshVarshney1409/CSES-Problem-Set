#include <iostream>
#include <vector>
 
using namespace std;
int main() {
    long long int n;
    cin >> n;
    // vector<int> vect;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        int temp;
        cin >> temp;
        sum = sum + temp;
    }
    int peace = (n * (n + 1)) / 2;
    int ans = peace - sum;
    cout << ans;
 
    return 0;
}
