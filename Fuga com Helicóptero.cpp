#include <iostream>
using namespace std;

int main(){
	int h, p, b, d;
	cin >> h >> p >> b >> d;
	//+-1(HPB)(HBP)(PHB)(PBH)(BHP)(BPH)
	if(d == 1){
		if(h > p && p > b)
			cout << "N";
		else if(h > b && b > p)
			cout << "S";
		else if(p > h && h > b)
			cout << "S";
		else if(p > b && b > h)
			cout << "N";
		else if(b > h && h > p)
			cout << "N";
		else if(b > p && p > h)
			cout << "S";
	} else {
		if(h > p && p > b)
			cout << "S";
		else if(h > b && b > p)
			cout << "N";
		else if(p > h && h > b)
			cout << "N";
		else if(p > b && b > h)
			cout << "S";
		else if(b > h && h > p)
			cout << "S";
		else if(b > p && p > h)
			cout << "N";
	}
	return 0;
}