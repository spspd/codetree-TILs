#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[100];
    int appear_cnt = 0;
    int numb;

    for(int i =0; i< n ; i++){
        cin >> numb;
        if(numb == 2){
            arr[appear_cnt] = i+1;
            appear_cnt += 1;
        }
    }
    cout << arr[2]<<endl;


    return 0;
}