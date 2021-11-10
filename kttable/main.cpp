#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
			int num;
			cin >> num;

			int time_arr[num+1];
			time_arr[0]=0;
			for (int i=1;i<num;i++) cin >> time_arr[i];
			int time_want[num];
			for (int i=0;i<num;i++) cin >> time_want[i];
			int avail = 0;
			for(int i=0;i<num;i++){
				if(time_want[i]<=(time_arr[i+1]-time_arr[i]))avail++;
				
			}
		cout << avail << endl;	
	}

		
}
