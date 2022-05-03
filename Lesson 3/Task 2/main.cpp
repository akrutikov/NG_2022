#include <iostream>

using namespace std;

int main()
{
    int arr1[4], arr2[4], sum1 = 0, sum2 = 0;

    for(int i = 0; i < 4; i++){
        cout << "Your first array is: ";
        cin >> arr1[i];
    }
    for(int j = 0; j < 4; j++){
        cout << "Your second array is: ";
        cin >> arr2[j];
    }
    for(int i = 0; i < 4; i++){
        sum1 += arr1[i];
        if(i < 3)
            sum1 *= 10;
    }
    for(int j = 0; j < 4; j++){
        sum2 += arr2[j];
        if(j < 3){
            sum2 *= 10;
        }
    }
    if(sum1 > sum2){
        cout << sum1 << " > " << sum2;
    }
    else if(sum1 < sum2){
        cout << sum1 << " < " << sum2;
    }
    else
        cout << sum1 << " = " << sum2;
}
