#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[200], s2[100];
    cout << "Enter first string: ";
    cin.getline(s1, 200);
    cout << "Enter second string: ";
    cin.getline(s2, 100);

    if (strstr(s1, s2))
        cout << "String 2 is present in String 1.";
    else
        cout << "String 2 is not present in String 1.";
    return 0;
}
