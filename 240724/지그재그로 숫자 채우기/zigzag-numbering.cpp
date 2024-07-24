#include <iostream>
using namespace std;

int main() {
    int n,m,cnt;
    int chart[100][100];
    
    cin >> n >> m;

    cnt = 0;
    // 행렬 역순 , m 이 홀수일때 역수
    for(int i =0; i< m; i++){
        for(int j =0; j< n; j++){
            if(i % 2){
                chart[n - 1 - j][i] = cnt;
            }
            else{
                chart[j][i] = cnt;
            }
            
            cnt += 1;
        }
    }
    for(int i = 0; i < n ; i++){
        for (int j = 0; j < m ; j++){
            cout << chart[i][j]<< " ";
        }
        cout << endl;
    }
    return 0;
}