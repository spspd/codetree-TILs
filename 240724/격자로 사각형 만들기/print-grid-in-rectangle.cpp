#include <iostream>
using namespace std;

int main() {
    int k;
    int row =0, col =0;

    cin >> k;
    int chart[10][10] = {0};
    for(int i = 0; i< k ; i++){
        for(int j = 0; j< k ; j++){
            if( i ==0 || j ==0){
                chart[i][j] = 1;
            }
            else{
                chart[i][j] = chart[i-1][j]+ chart[i][j-1] + chart[i-1][j-1];
            }
        }
    }
    for(int i = 0 ; i< k ; i++){
        for(int j =0; j<k ; j++){
            cout << chart[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}