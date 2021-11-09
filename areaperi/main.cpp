#include <iostream>
using namespace std;

int main(){
	int l,b;
	cin >> l >> b;
	int area = l*b;
	int peri = l+b+l+b;
	if(area > peri) {
		cout << "Area" << endl;
		cout << area << endl;
	}
	else if(peri > area) {
		cout << "Peri" << endl;
		cout << peri << endl;
	}
	else{
		cout << "Eq" << endl;
		cout << area << endl;
	}
	return 0;
}

