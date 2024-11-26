#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dx[4] ={1,-1,0,0};
    int dy[4] ={0,0,-1,1};
    char news;
    int news_n =0;
    int step = 0;
    // EWSN
    int xpos = 0; int ypos = 0;
    for(int i=0; i< n; i++){
        cin >> news >> step;
        if(news=='E') news_n=0;
        if(news=='W') news_n=1;
        if(news=='S') news_n=2;
        if(news=='N') news_n=3;
        xpos += dx[news_n] *step;
        ypos += dy[news_n] *step;
    }
    
    cout << xpos << " " << ypos;
    return 0;
}