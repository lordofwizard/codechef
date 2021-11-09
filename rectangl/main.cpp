#include <iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	int a,s,d,f;
	cin >> a>>s>>d>>f;
	if(a == s && d == f ||
	   a == d && s == f ||
	   a == f && s == d) 
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
	}
	return 0;
}
