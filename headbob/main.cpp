#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int len;
		string str;
		cin >> len;
		cin >> str;
		int i;
	for(i = 0;i <len;i++){

		if(str[i] == 'I'){
			cout << "INDIAN" <<endl;
			break;
		}
		else if(str[i] == 'Y'){
			cout << "NOT INDIAN" << endl;
			break;
		}
		
		}
		if (i == len)
			cout << "NOT SURE" << endl;

	}	
	return 0;
		}

