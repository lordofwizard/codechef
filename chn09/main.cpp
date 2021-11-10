#include <iostream>
#include <string>
using namespace std;

int main(){
	   int t;
	   cin >> t;
	   while (t--)
	   {
			 string ball;
			 cin >> ball;
			 int a_num = 0;
			 int b_num = 0;
			 for(int i =0; i< ball.size(); i++){
				    if(ball[i] == 'a') a_num++;
				    if(ball[i] == 'b') b_num++;
			 }
			 if(a_num>b_num)  cout << b_num << endl;
			 else if (a_num<b_num) cout << a_num << endl;
			 else	cout << a_num << endl;
	   }
	return 0;
}
