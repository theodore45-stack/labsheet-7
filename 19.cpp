#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sentence[300] = "";
    char word[100];
    int n;
    cout << "How many words? ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "Enter word " << i+1 << ": ";
        cin.getline(word, 100);
        strcat(sentence, word);
        if (i < n - 1) strcat(sentence, " ");
    }

    cout << "Joined sentence: " << sentence;
    return 0;
}
