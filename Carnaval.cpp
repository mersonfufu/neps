#include <iostream>
using namespace std;

int main(){
	float n1, n2, n3, n4, n5, nt, menor, maior;
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	cout.precision(1);
	cout.setf(ios::fixed);
	if(n1 <= n2 && n1 <= n3 && n1 <= n4 && n1 <= n5)
		menor = n1;
	else {
		if(n2 <= n3 && n2 <= n4 && n2 <= n5)
			menor = n2;
		else {
			if(n3 <= n4 && n3 <= n5)
				menor = n3;
			else {
				if(n4 <= n5)
					menor = n4;
				else
					menor = n5;
			}
		}
	}
	if(n1 >= n2 && n1 >= n3 && n1 >= n4 && n1 >= n5)
		maior = n1;
	else {
		if(n2 >= n3 && n2 >= n4 && n2 >= n5)
			maior = n2;
		else {
			if(n3 >= n4 && n3 >= n5)
				maior = n3;
			else {
				if(n4 >= n5)
					maior = n4;
				else
					maior = n5;
			}
		}
	}
	nt = n1 + n2 + n3 + n4 + n5 - menor - maior;
	cout << nt;
	return 0;
}