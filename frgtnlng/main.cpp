#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    int k;
    cin >> n;
    cin >> k;
    std::vector<string> message;
    int flag=0;
    for(int i = 0; i < n; i++){
      string temp_string;
      cin >> temp_string;
      message.push_back(temp_string);
    }

    int l;
    cin >> l;
    std::vector<string> modern;
    for(int i = 0; i < l; i++){
      string temp_string;
      cin >> temp_string;
      modern.push_back(temp_string);
    }

    for(string x: message){
      for(string y: modern){
        if(x == y){
          cout << "YES" << " ";
		flag = 1;	
          break;
        }else continue;

      }
	 if (!flag){
            cout << "NO" << " ";
	 }
    }
  }

}
