#include <iostream>
using namespace std;

int main() {
    int a , b;
    cin >> a >>b;
    int max;
    max = b>a ? b : a;
    cout << max;
    return 0;
}