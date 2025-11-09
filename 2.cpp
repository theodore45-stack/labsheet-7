#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    int vowels = 0;
    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; i < strlen(str); i++) {
        char c = tolower(str[i]);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            vowels++;
    }
    cout << "Number of vowels: " << vowels;
    return 0;
}
