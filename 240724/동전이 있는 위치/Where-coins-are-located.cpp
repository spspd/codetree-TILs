#include <iostream>
using namespace std;

int main() {
    int n, count ;
    int chart[10][10] = { 0 };
    cin >> n >> count;
    for( int i = 0 ; i< count; i++){
        int r,c;
        cin >> r >> c;
        chart[r][c] = 1;
    }


    for(int i =1; i<=n ;i++){
        for(int j =1; j<=n ; j++){
            cout << chart[i][j]<< " ";
        }
        cout << endl;
    }
    
    return 0;
}