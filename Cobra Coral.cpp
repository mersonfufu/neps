#include <iostream>
using namespace std;

int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if(
		(a != b && a != d && b != c && a == c) ||
		(a != b && a != c && a != d && b == d)
	)
		cout << "V";
	else
		cout << "F";
	return 0;
}