#include <iostream>
using namespace std;

int main() {
    int n, count;
    
    cin >> n >> count;
    int chart[10][10] ={ };

    for(int i =0; i< count; i++){
        int x,y;
        cin >> y >> x;
        chart[y-1][x-1] = y*x;
    }
    for(int i =0; i< n; i++){
        for(int j =0; j< n; j++){
            cout << chart[i][j] << " ";
            
        }
        cout << endl;
    }
    return 0;
}