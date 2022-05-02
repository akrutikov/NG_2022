#include <iostream>

using namespace std;

int main()
{
    int hight;
    cout << "Enter hight of your tree: ";
    cin >> hight;
    for(int i = 0; i < hight; i++){
        for(int j = 1; j < hight - i; j++){
            cout << " ";
        }
        for(int j = hight - i * 2; j <= hight; j++){
            cout << "*";
        }
        cout << endl;
    }
    int i = 0;
    for(int j = 1; j < hight - i; j++){
            cout << " ";
        }
        for(int j = hight - i * 2; j <= hight; j++){
            cout << "*";
        }
}
