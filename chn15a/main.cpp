#include <iostream>
using namespace std;

int main(){
	   int t;
	   cin >> t;
	   while (t--){
			int num;
			cin >> num;
			int mut;
			cin >> mut;
			int arr[num];
			int wolv=0;

			for(int i = 0;i < num; i++){
				cin >> arr[num];
				if((arr[num]+mut)%7==0) wolv++;
			}
			cout << wolv << endl;	
	   }
	return 0;
}
