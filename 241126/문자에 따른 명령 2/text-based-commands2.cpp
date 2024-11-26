#include <iostream>
using namespace std;

int dir_name = 3;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,-1,1};
int xpos =0; int ypos = 0;
int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >>a;
    for(char k : a){
        if(k == 'L'){dir_name =1;}
        if(k == 'R'){dir_name =0;}
        if(k == 'F'){
            xpos+= dx[dir_name];
            ypos+= dy[dir_name];
            }
    }
    cout << xpos << " "<< ypos;
    return 0;
}