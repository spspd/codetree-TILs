#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n=4, m= 3;
    int num = 1;
    
    for(int i =0; i<4; i++){
        for (int j = 0; j<3; j++){
            cout << num<< " ";
            num += 1;
        }
        cout << endl;
    }

    return 0;
}