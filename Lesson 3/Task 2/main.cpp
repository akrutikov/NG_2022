#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int arr1[4], arr2[4], sum1 = 0, sum2 = 0;
    srand(time(0));
    cout << "Your first array is: ";
    for(int i = 0; i < 4; i++){
        arr1[i] = rand() % 9;
        cout << arr1[i];
        cout << " ";
    }
    cout << endl;
    cout << "Your second array is: ";
    for(int j = 0; j < 4; j++){
        arr2[j] = rand() % 9;
        cout << arr2[j];
        cout << " ";
    }
    cout << endl;
    for(int i = 0; i < 4; i++){
        sum1 += arr1[i];
        sum2 += arr2[i];
        if(i < 3){
            sum1 *= 10;
            sum2 *= 10;
        }
    }
    if(sum1 > sum2){
        cout << sum1 << " > " << sum2;
    } else if(sum1 < sum2){
        cout << sum1 << " < " << sum2;
    } else
        cout << sum1 << " = " << sum2;
}
