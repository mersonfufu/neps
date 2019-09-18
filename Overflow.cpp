#include <iostream>
using namespace std;

int main(){
	int maior, p, q;
	char op;
	cin >> maior >> p >> op >> q;
	if(op == '+'){
		if(p + q > maior)
			cout << "OVERFLOW";
		else
			cout << "OK";
	} else {
		if(op == '*'){
			if(p * q > maior)
				cout << "OVERFLOW";
			else
				cout << "OK";
		}
	}
	return 0;
}