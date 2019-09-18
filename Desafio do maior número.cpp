#include <iostream>
using namespace std;

int main(){
	int n, mn = 0;
	while(cin >> n){
		if(n > mn)
			mn = n;
		if(n == 0)
			break;
	}
	cout << mn;
	return 0;
}