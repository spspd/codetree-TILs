#include <iostream>
using namespace std;

int main() {
    // 파싱
    int n, q;
    cin >> n >> q;
    int n_array[100] = {0};

    for(int i = 0; i<n ; i++){
        cin >> n_array[i];
    }

    // 동작부
    int q_cnt = q;
    int idx = 0;
    while(q){
        int question, numb1, numb2;
        
        cin >> question;

        switch(question)
        {
            case 1 :
                cin >> numb1;
                cout << n_array[numb1-1] << endl;
                break;
            case 2 :
                cin >> numb1;
                for(int i = 0; i < n; i++){
                    if( n_array[i] == numb1){
                        idx = i+1;
                        break;
                    }
                }
                cout << idx << endl;
                break;
            case 3 :
                cin >> numb1 >> numb2;
                for(int i =numb1; i<=numb2 ; i++ ){// numb1 added +1
                    cout << n_array[i -1] << " ";
                }
                cout << endl;
                break;

        }
        q -= 1;
    }
    return 0;
}