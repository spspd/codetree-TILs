#include <iostream>
using namespace std;

int main() {
    int row, col;
    int cnt = 1;
    int chart[100][100];
    
    cin >> col >> row;

    for(int i = 0; i < row +col -1; i++){
        for(int j = i; 0 <= j; j--){
            if( (i-j< col) && (j<row)){
                chart[i-j][j] = cnt;
                cnt++;

            }
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