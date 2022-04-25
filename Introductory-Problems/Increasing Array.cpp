#include <algorithm>
#include <iostream>
#include <vector>
#define ll long long 
using namespace std;

int main() {
	ll int n;
	cin>>n;
	ll int arr[n];
	for(ll int i=0;i<n;i++){
		cin>>arr[i];
	}
	ll int sum=0;
	for(ll int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1]){
			sum=sum+abs(arr[i]-arr[i+1]);
			arr[i+1]=arr[i];
		}
	}
	cout<<sum;

	return 0;
}
