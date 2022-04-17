#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float Motherboard, Videocard, CPU, Discount, Cost;
    cout << "Motherboard price: ";
    cin >> Motherboard;
    cout << "Videocard price: ";
    cin >> Videocard;
    cout << "CPU price: ";
    cin >> CPU;
    cout << "Discount: ";
    cin >> Discount;
    Cost = Motherboard + Videocard + CPU;
    Discount = Cost * Discount / 100;
    Cost -= Discount;
    cout << "Your PC will cost: "
         << Cost << "$";
}
