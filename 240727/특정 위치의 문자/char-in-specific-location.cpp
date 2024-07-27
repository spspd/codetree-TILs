#include <iostream>
using namespace std;

int main() {
    // 상태 설정
    char word[6]= {'L', 'E', 'B', 'R', 'O', 'S'};
    char input;
    int idx;

    cin >> input;

    // 동작
    for(int i = 0; i < 6; i++){
        if(word[i] == input){
            idx = i;
        }
    }

    // 출력
    cout << idx;
    return 0;
}