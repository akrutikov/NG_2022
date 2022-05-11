#include <iostream>

using namespace std;

int main()
{
    int arr[20];
    for(int i = 0; i < 20; i++){
        cout << "Enter your value: ";
        cin >> arr[i];
        if(arr[i] == 0){
            for(i; i < 20; i++){
                arr[i] == 0;
            }
            break;
        }
    }
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < arr[i]; j++){
            cout << "*";
            }
            if(arr[i] <= 0){
                break;
            }
        cout << endl;
    }
}
