#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[100], b[100];
    cout << "Enter first string: ";
    cin.getline(a, 100);
    cout << "Enter second string: ";
    cin.getline(b, 100);

    if (strcmp(a, b) == 0)
        cout << "Strings are equal.";
    else
        cout << "Strings are not equal.";
    return 0;
}
