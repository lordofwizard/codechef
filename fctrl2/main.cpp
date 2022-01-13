#include <iostream>

using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int z=1;
	    for(int i=1;i<n+1;i++){
	        z=z*i;
	    }
	    cout<<z<<endl;
	}
	
	return 0;
}
