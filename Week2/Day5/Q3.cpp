#include <iostream>
#include <string>

using namespace std;

void countVowelsAndConsonants(const string &str, int &vowelCount, int &consonantCount) {
    vowelCount = 0;
    consonantCount = 0;

    for (char ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            ++vowelCount;
        }
        else if (ch >= 'a' && ch <= 'z') {
            ++consonantCount;
        }
    }
}

int main() {
    string inputString;
    int vowels, consonants;

    cout << "Enter a string: ";
    getline(cin, inputString);

    countVowelsAndConsonants(inputString, vowels, consonants);

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}
