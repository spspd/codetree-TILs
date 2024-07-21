#include <iostream>
using namespace std;

int main() {
    char list_char[5][3];
    for(int j =0; j<5 ; j++){
        for(int i =0; i<3 ; i++){
            char a;
            cin >> a;
            list_char[j][i] = char(int(a)-32);
            cout << list_char[j][i] << " ";
        }
        cout<< endl;
    }
    
    return 0;
}