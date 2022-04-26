#include <algorithm>
#include <iostream>
#include <vector>
#define ll long long 

using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--){
		ll int a,b;
		cin>>a>>b;
		if((a+b) % 3LL==0 && min(a, b) * 2LL >= max(a, b)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}

	}


	return 0;
}
