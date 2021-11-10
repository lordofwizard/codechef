#include <iostream>
using namespace std;


int main(){
	int num;
	cin >> num;
	int step = 0;
	while(num!=0){
		   step++;
		   num=num/10;
	}
	if(step < 4){
		cout << step << endl;
	}
	else
		cout << "More than 3 digits" << endl;

	return 0;
}
