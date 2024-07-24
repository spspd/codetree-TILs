#include <iostream>
using namespace std;

int main() {
    int n, count;
    cin >> n >> count;

    int chart[10][10] = {0};
    int cnt =1;

    for(int i =0; i < count; i++){
        int r,c;
        cin >> r >> c;
        chart[r][c] = cnt;
        cnt++;
    }

    for(int i =0; i< n; i++){
        for(int j =0; j < n; j++){
            cout << chart[i+1][j+1] << " ";
        }
        cout << endl;
    }
    return 0;
}