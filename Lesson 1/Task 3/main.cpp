#include <iostream>

using namespace std;

int main()
{
    int age, answer;
    cout << "Enter your age: ";
    cin >> age;
    if(age > 10) {
        cout << "Do you study? (1/0): ";
        cin >> answer;
        if(answer == 1){
            cout << "You are awesome!";
        } else {
            cout << "Why?";
        }
    } else {
        cout << "Wow, you're already so big!";
    }
}
