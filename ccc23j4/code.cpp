#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int arr[4][x+2];


    for(int i = 0 ; i < 4; i++)
        for (int j = 0 ; j < x+2; j++)
            arr[i][j] = 0;

    for(int i = 1; i < 3 ; i++){
        for (int j = 1; j < x+1; j++) cin >> arr[i][j];
    }
    int result = 0;
    for(int i = 1; i < 3; i++){
        for(int j = 1; j < x+1 ; j++){
            if(j % 2 == 1){
            if (arr[i][j] == 1){
                result += 3;
                if(arr[i][j+1] == 1) result -= 1; // right
                if(arr[i][j-1] == 1) result -= 1; // left
                if(arr[i+1][j] == 1) result -= 1; // down
                if(arr[i-1][j] == 1) result -= 1; // up
            }}
            else{
            if (arr[i][j] == 1){
                result += 3;
                if(arr[i][j+1] == 1) result -= 1; // right
                if(arr[i][j-1] == 1) result -= 1; // left
            }
            }
        }
    }
    cout << result << endl;

}

