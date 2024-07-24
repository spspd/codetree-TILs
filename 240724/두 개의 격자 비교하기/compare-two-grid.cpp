#include <iostream>
using namespace std;

int main() {
    int var_n, var_m;

    cin >> var_n >> var_m;
    
    int chart1[10][10],  chart2[10][10], chart_result[10][10];


    // input n X m X 2
    for(int i =0; i<var_n ; i++ ){
        for(int j =0; j<var_m ; j++ ){
            cin >> chart1[i][j];
        }
    }

    for(int i =0; i<var_n ; i++ ){
        for(int j =0; j<var_m ; j++ ){
            cin >> chart2[i][j];
        }
    }
    

    // cal

    for(int i =0; i<var_n ; i++ ){
        for(int j =0; j<var_m ; j++ ){
            if(chart1[i][j] == chart2[i][j]){
                chart_result[i][j] = 0;
            }
            else{
                chart_result[i][j] = 1;
            }
        }
    }

    // output

    for(int i =0; i<var_n ; i++ ){
        for(int j =0; j<var_m ; j++ ){
            cout << chart_result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}