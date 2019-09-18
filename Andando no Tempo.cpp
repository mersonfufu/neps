#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	if(
		(+a + b == 0) || (+a - b == 0) || (-a + b == 0) ||
		(-a - b == 0) || (+a + c == 0) || (+a - c == 0) ||
		(-a + c == 0) || (-a - c == 0) || (+b + c == 0) ||
		(+b - c == 0) || (-b + c == 0) || (-b - c == 0) ||
		(+a + b + c == 0) || (+a + b - c == 0) || (+a - b + c == 0) ||
		(+a - b - c == 0) || (-a + b + c == 0) || (-a + b - c == 0) ||
		(-a - b + c == 0) || (-a - b - c == 0)
	)
		cout << "S";
	else
		cout << "N";
	return 0;
}