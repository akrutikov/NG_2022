#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float Motherboard, Videocard, CPU, Discount;
    cout << "Motherboard price: ";
    cin >> Motherboard;
    cout << "Videocard price: ";
    cin >> Videocard;
    cout << "CPU price: ";
    cin >> CPU;
    cout << "Discount: ";
    cin >> Discount;
    Discount = (Motherboard + Videocard + CPU) * Discount / 100;
    Discount = Motherboard + Videocard + CPU - Discount;
    cout << "Your PC will cost: "
         << Discount << "$";
}
