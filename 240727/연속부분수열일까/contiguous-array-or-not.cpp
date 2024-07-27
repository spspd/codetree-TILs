#include <iostream>
using namespace std;

int main() {
    // 설정
    int n1, n2 ;

    int n1_array[100] = {0};
    int n2_array[100] = {0};
    cin >> n1 >> n2;
    for( int i = 0; i< n1; i++){
        cin >> n1_array[i];
    }

    for( int i = 0; i< n2; i++){
        cin >> n2_array[i];
    }

    // 비교 ( B가 A의  -> A가 같거나 더 큼)

    // 초기화 
    int correct = -1;
    for( int i =0; i< n1 ; i++){
        for (int j = 0; j< n2; j++){

            // 더 적게 남았다면
            if(n1 -i < n2){
                break;
            }

            // 같지 않다면 
            if(n1_array[i+j] == n2_array[j]){
                
                break;
            }
            else{
                // clear
                // cout << j << " ";
                if(j == n2 -1){
                    correct = 1;
                }
            }
        }

    }

    cout << (correct == 1 ? "Yes" : "No" )<< endl;
    return 0;
}