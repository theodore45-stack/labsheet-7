#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool areAnagrams(char a[], char b[]) {
    if (strlen(a) != strlen(b))
        return false;

    sort(a, a + strlen(a));
    sort(b, b + strlen(b));

    return strcmp(a, b) == 0;
}

int main() {
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin.getline(str1, 100);
    cout << "Enter second string: ";
    cin.getline(str2, 100);

    if (areAnagrams(str1, str2))
        cout << "Strings are anagrams.";
    else
        cout << "Strings are not anagrams.";
    return 0;
}
