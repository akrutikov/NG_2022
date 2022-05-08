#include <iostream>

using namespace std;

int main()
{
    int SIZE, num;
    cout << "Enter size of array: ";
    cin >> SIZE;
    int arr[SIZE];
    for(int i = 0; i < SIZE; i++){
        cout << "Enter element: ";
        cin >> arr[i];
    }
    cout << "What number you want to check: ";
    cin >> num;
    for(int j = 0; j < SIZE; j++){
        if(num == arr[j]){
            cout << "I know that number!";
        }
    }
}
