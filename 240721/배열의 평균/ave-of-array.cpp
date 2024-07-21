#include <iostream>
using namespace std;

int main() {

    cout << fixed;
    cout.precision(1); 
    int row = 4 , col = 2;
    int chart[2][4];
    for (int i =0; i<col; i++){
        for (int j = 0;  j<row; j++){
            cin >> chart[i][j];
        }
    }

    for (int i =0; i< col; i++){
        int sum = 0;
        for (int j = 0;  j<row; j++){
            sum += chart[i][j];
        }
        cout << (double(sum) / row)<< " "; 
    }
    cout<< endl;


    for (int i =0; i< row; i++){
        int sum = 0;
        for (int j = 0;  j<col; j++){
            sum += chart[j][i];
        }
        cout << (double(sum) / col)<< " "; 
    }
    cout<< endl;

    int sum = 0;
    for (int i =0; i< col; i++){
        for (int j = 0;  j<row; j++){
            sum += chart[i][j];
        } 
    }
    cout << (double(sum) / 8); 
    return 0;
}