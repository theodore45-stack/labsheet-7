#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200], result[200];
    int j = 0;
    cout << "Enter a string: ";
    cin.getline(str, 200);

    for (int i = 0; i < strlen(str); i++) {
        char c = tolower(str[i]);
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'))
            result[j++] = str[i];
    }
    result[j] = '\0';
    cout << "String without vowels: " << result;
    return 0;
}
