#include <iostream>

using namespace std;

int main()
{
    char str1[100];
    char str2[100];
    int first = 0;
    int second = 0;
    cout << "Enter your first string: " << endl;
    cin.getline(str1,100);
    cout << "Enter your second string: " << endl;
    cin.getline(str2,100);
    while(str1[first]){
        first ++;
    }
     while(str2[second]){
        second ++;
    }
    if(first > second){
        cout << "First string is bigger!";
    }
    else if(first == second){
        cout << "They are same";
    }
    else if(first < second){
        cout << "Second string is bigger!";
    }
}

