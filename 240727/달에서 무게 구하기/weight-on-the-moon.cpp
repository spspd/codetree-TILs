#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    int moon = 13;
    double a = 0.165;
    cout.precision(6);
    cout << moon << " * " << a << " = "<< moon*a << endl;
    return 0;
}