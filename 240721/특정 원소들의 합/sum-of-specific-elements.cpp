#include <iostream>
using namespace std;

int main() {
    int matrix[4][4];
    for(int i =0; i<4 ;i++){
        for (int j =0; j<4 ; j++){
            cin >> matrix[i][j];

        }
    }
    int sum =0;
    
    for(int i =0; i<4 ;i++){
        for (int j =0; j<i+1 ; j++){
            sum+=matrix[i][j];
        }
    }
    cout<< sum;
    return 0;
}