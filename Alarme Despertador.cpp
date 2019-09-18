#include <iostream>
using namespace std;

int main(){
	int ha = 1, ma, hd, md, tempo = 1;
	while(ha != 0 or ma != 0 or hd != 0 or md != 0){
		cin >> ha >> ma >> hd >> md;
		if(ha == 0 and ma == 0 and hd == 0 and md == 0)
			break;
		if((hd * 60 * 60 + md * 60) < (ha * 60 * 60 + ma * 60))
			tempo = ((hd + 24) * 60 * 60 + md * 60) - (ha * 60 * 60 + ma * 60);
		else
			tempo = (hd * 60 * 60 + md * 60) - (ha * 60 * 60 + ma * 60);
		cout << tempo / 60 << "\n";
	}
	return 0;
}