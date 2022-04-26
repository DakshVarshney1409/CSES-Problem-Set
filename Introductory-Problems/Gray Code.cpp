#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void graycode(int n)
{
    if (n <= 0)
        return;
 
    vector<string> vect;
 
    vect.push_back("0");
    vect.push_back("1");
    
    for (int i = 2; i < (1<<n); i = i<<1)
    {
        for (int j = i-1 ; j >= 0 ; j--)
            vect.push_back(vect[j]);
 
        for (int j = 0 ; j < i ; j++)
            vect[j] = "0" + vect[j];
 
        for (int j = i ; j < 2*i ; j++)
            vect[j] = "1" + vect[j];
    }
 
    for (int i = 0 ; i < vect.size() ; i++ )
        cout << vect[i] << endl;
}

using namespace std;

int main() {
	int n;
	cin>>n;
	graycode(n);
	return 0;
}
