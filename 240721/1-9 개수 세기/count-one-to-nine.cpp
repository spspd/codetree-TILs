#include <iostream>
using namespace std;

int main() {
    int val;
    int input_list[100];
    int count_num[10] = {0, };
    cin >> val;
    for(int i =0; i< 100; i++){
    cin >> input_list[i];
    }

    for(int i = 0; i< val; i++){
        count_num[input_list[i]] +=1;
    }
    for(int i = 1 ; i< 10; i++){
        cout << count_num[i]<< endl;
    }
    return 0;
}