#include <iostream>

using namespace std;

int main()
{
    int num, sum;
    cout << "Enter your walue: ";
    cin >> num;
    for(int i = num; i > 0; i /= 10){
        if(i % 10 == i / 10 % 10 || num % 10 == i){
            sum += i % 10;
        }
    }
    cout << sum;
}
