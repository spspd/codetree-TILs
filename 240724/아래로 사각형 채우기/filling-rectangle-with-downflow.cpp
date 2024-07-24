#include <iostream>
using namespace std;

int main() {
    int input1, cnt;
    cin >> input1;
    cnt = 0;
    int chart[10][10];

    // 세로로 증가 -> 가로세로 반대
    for(int i = 0 ; i< input1; i++)
        for(int j = 0 ; j < input1; j++){
            cnt += 1;
            chart[j][i] = cnt;
        }
        

    for(int i = 0 ; i< input1; i++)
    {
        for(int j = 0 ; j < input1; j++)
            cout << chart[i][j] << " ";
        cout << endl;
    }
    return 0;
}