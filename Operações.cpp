#include <iostream>
using namespace std;

int main(){
	char opr;
	double num1, num2, result;
	cout.precision(2);
	cout.setf(ios::fixed);
	cin >> opr;
	cin >> num1 >> num2;
	if(opr == 'M' || opr == 'm'){
		result = num1 * num2;
		cout << result;
	} else {
		if(opr == 'D' || opr == 'd'){
			result = num1 / num2;
			cout << result;
		} else
			cout << "Letra invahlida,animal de teta!";
	}
	return 0;
}