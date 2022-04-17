#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, c, D, x1, x2;
    cout << "Enter value a: ";
    cin >> a;
    cout << "Enter value b: ";
    cin >> b;
    cout << "Enter value c: ";
    cin >> c;
    cout << "D = " << D<< endl;
    if (D > 0){
        x1 = ((-b) + sqrt(D)) / (2 * a);
        x2 = ((-b) - sqrt(D)) / (2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "X2 = " << x2;
    } else if (D == 0){
        x1 = -b / 2 * a;
        cout << "x = " << x1;
    } else if (D < 0){
        cout << "Discriminat < 0 no answer";
    }
}
