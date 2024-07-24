#include <iostream>
using namespace std;

int main() {
    int var_a;
    cin >> var_a;
    int chart[15][15] = {0};
    
    for( int i = 0 ; i< var_a ; i++){
        for (int j = 0 ; j <= i ; j++){
            if(j == 0 || i == j){
                chart[i][j] = 1;
            }
            else{
                chart[i][j] = chart[i-1][j-1]+ chart[i-1][j];
            }
        }
        
    }


    for( int i = 0 ; i < var_a ; i++){
        for (int j = 0 ; j <= i ; j++){
            cout << chart[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}