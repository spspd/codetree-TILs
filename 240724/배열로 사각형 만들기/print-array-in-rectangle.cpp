#include <iostream>
using namespace std;

int main() {
    int row =0, col =0;
    int chart[5][5] = {0};
    for(int i = 0; i< 5 ; i++){
        for(int j = 0; j< 5 ; j++){
            if( i ==0 || j ==0){
                chart[i][j] = 1;
            }
            else{
                chart[i][j] = chart[i-1][j]+ chart[i][j-1];
            }
        }
    }
    for(int i = 0 ; i< 5 ; i++){
        for(int j =0; j<5 ; j++){
            cout << chart[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}