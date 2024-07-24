#include <iostream>
using namespace std;

int main() {
    int row, col;
    int cnt = 1;
    int chart[100][100];
    
    cin >> col >> row;

    for(int i = 0; i < row; i++){
        for(int j = i; 0 < j; j--){
            chart[i][j] = cnt;
            cnt++;
            // 0 / 01 10 / 02 11 20 
        }
    }
    for (int i = 0; i < col; i++){
        for (int j = 0; j < row; j++ ){
            cout << chart[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}