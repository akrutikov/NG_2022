#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter your age: ";
    cin >> a;
    if(a > 10) {
        cout << "Do you study? (1/0): ";
        cin >> b;
        if(b == 1){
            cout << "You are awesome!";
        } if(b == 0){
            cout << "Why?";
        }
    } if(a <= 10){
        cout << "Wow, you're already so big!";
    }
}
