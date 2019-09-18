#include <iostream>
using namespace std;

int main(){
	int portau, portad;
	cin >> portau >> portad;
	if(portau == 0)
		cout << "C";
	else {
		if(portad == 0)
			cout << "B";
		else
			cout << "A";
	}
	return 0;
}