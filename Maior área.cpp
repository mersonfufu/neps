#include <iostream>
using namespace std;

int main(){
	int ladou, ladod, areau, aread;
	cin >> ladou >> ladod;
	areau = ladou * ladod;
	cin >> ladou >> ladod;
	aread = ladou * ladod;
	if(areau == aread)
		cout << "Empate";		
	else {
		if(areau > aread)
			cout << "Primeiro";
		else
			cout << "Segundo";
	}
	return 0;
}