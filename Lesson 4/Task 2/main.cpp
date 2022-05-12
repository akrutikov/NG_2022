#include <iostream>

using namespace std;

int main()
{
    int walue;
    char str[100];
    cout << "Enter your text: ";
    cin.getline(str, 100);
    for(int i = 0; i < 100; i++){
        if(str[i] == 'a' == str[i+1] == 'a'|| str[i+1] == 'e'|| str[i+1] == 'i'|| str[i+1] == 'o'|| str[i+1] == 'u'|| str[i+1] == 'y'||
           str[i] == 'e' == str[i+1] == 'a'|| str[i+1] == 'e'|| str[i+1] == 'i'|| str[i+1] == 'o'|| str[i+1] == 'u'|| str[i+1] == 'y'||
           str[i] == 'i' == str[i+1] == 'a'|| str[i+1] == 'e'|| str[i+1] == 'i'|| str[i+1] == 'o'|| str[i+1] == 'u'|| str[i+1] == 'y'||
           str[i] == 'o' == str[i+1] == 'a'|| str[i+1] == 'e'|| str[i+1] == 'i'|| str[i+1] == 'o'|| str[i+1] == 'u'|| str[i+1] == 'y'||
           str[i] == 'u' == str[i+1] == 'a'|| str[i+1] == 'e'|| str[i+1] == 'i'|| str[i+1] == 'o'|| str[i+1] == 'u'|| str[i+1] == 'y'||
           str[i] == 'y' == str[i+1] == 'a'|| str[i+1] == 'e'|| str[i+1] == 'i'|| str[i+1] == 'o'|| str[i+1] == 'u'|| str[i+1] == 'y') walue++;
    }
    cout << walue;
    //A, E, I, O, U, Y.
}
