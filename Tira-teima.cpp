#include <iostream>
using namespace std;

int main(){
	int x, y;
	//0,0 ate 432,468
	cin >> x >> y;
	if(x < -500 || x > 500 || y < -500 || y > 500)
		cout << "entrada invalida,jumento!\n";
	else {
		if(x >= 0 && x <= 432){
			if(y >= 0 && y <= 468)
				cout << "dentro";
			else
				cout << "fora";
		} else
			cout << "fora";
	}
	return 0;
}