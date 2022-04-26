#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin>>n;
	int ans=0;
	int base=5;
	while((n/base)>0){
		ans=ans+(n/base);
		base=base*5;		
	}
	cout<<ans;

	return 0;
}
