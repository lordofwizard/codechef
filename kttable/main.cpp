#include <iostream>
#include <vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a1[n+1],a2[n+1];
		a1[0] = 0;
		a2[0] = 0;
		for(int i = 1; i <= n ; i++){ cin >> a1[i]; }
		for(int i = 1; i <= n ; i++){ cin >> a2[i]; }
		short answer = 0;
		for (int i = 1; i <= n ; i++){
			   if((a1[i]-a1[i-1]) >= a2[i]) answer++;
		}
		cout << answer << endl;
	}
return 0;
}
	
