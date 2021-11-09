#include <iostream>
using namespace std;

int main(){
	int len;
	cin >> len;
	int arr[100];
	int even=0;
	int odd=0;
	for(int i = 0;i < len ; i++){
		cin >> arr[i];
		if(arr[i]%2==1) odd++;
		if(arr[i]%2==0) even++;
	}
	if(even > odd) {
		cout << "READY FOR BATTLE"<<endl;
	}
	else{

		cout << "NOT READY" << endl;
	}
	return 0;
}

