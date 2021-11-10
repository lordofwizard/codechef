#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >>b;
		int sum;
		sum = a+b;
		int num_arr[10][2] = {
		   {0,6},
		   {1,2},
		   {2,5},
		   {3,5},
		   {4,4},
		   {5,5},
		   {6,6},
		   {7,3},
		   {8,7},
		   {9,6}
		};
		int digit_sum=0;
		int digit;
		while(sum!=0){
			digit = sum%10;
			digit_sum+=num_arr[digit][1];
			sum = sum /10;
		}
		cout << digit_sum << endl;
	
	}
}
