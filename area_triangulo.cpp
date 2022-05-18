#include <iostream>
#include <math.h>
using namespace std;


int main () {
    float lado_a, lado_b, lado_c;
    cin>> lado_a >> lado_b >> lado_c;
    float per = (lado_a + lado_b + lado_c)/2;
    float area = sqrt(per* (per-lado_a) * (per-lado_b) * (per-lado_c));

     cout << fixed;
    cout.precision(2);
    cout << area << endl;


}