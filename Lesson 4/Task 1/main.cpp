#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first;
    string second;
    cout << "Enter your first string: ";
    getline(cin, first);
    cout << "Enter your second string: ";
    getline(cin, second);
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
