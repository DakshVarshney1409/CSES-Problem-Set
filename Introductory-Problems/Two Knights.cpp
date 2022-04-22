#include <iostream>
using namespace std; 
int main() {
	long long int n;
	cin>>n;
	for(long long int k=1;k<=n;k++){
		//long long int ans=((k-1)*(k+4)*(k*k-3*k+4))/2; Standard formula
		cout<<((k-1)*(k+4)*(k*k-3*k+4))/2<<endl;
	}
	return 0;
}
