#include <iostream>
using namespace std;

int main() {
    
    // 설정
    int n, m ;
    int int_array[100] = {0};
    cin >> n >> m;

    int cnt = 0;

    for(int i = 0; i < n; i++){
        cin >> int_array[i];
        if( int_array[i] == m){
            cnt +=1;
        }
    }
    
    cout << cnt;



    return 0;
}