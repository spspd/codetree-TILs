#include <iostream>
using namespace std;

int main() {
    int n;
    int cnt =1;
    cin >> n ; 

    int chart[10][10] = {0};

    for(int row = n-1; row>= 0 ; row--){
        if((n) % 2 == row % 2 ){
            for(int col = 0; col < n ; col++){
                chart[col][row] = cnt;
                cnt += 1;
            }
        }
        else{
            for(int col = n-1; col>= 0 ; col--){
                chart[col][row] = cnt;
                cnt += 1;
            }
        }
    }
    for(int col = 0; col < n ; col ++){
        for(int row = 0; row < n ; row++){
            cout << chart[col][row] << " ";
        }
        cout << endl;
    }

    return 0;
}