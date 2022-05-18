#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float X1, Y1, X2, Y2;
    cin >> X1 >> X2 >> Y1 >>Y2;
    float ab= sqrt( (pow(X2-X1,2)) + (pow(Y2-Y1,2)));

    cout << fixed;
    cout.precision(2);
    cout << ab << endl;
}
