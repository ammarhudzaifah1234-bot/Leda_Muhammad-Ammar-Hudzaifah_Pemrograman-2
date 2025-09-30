#include <iostream>
#include <string>
using namespace std;

bool Kucing(char c) {
    c = tolower(c);
    return (c=='a' || c=='i' || c=='u' || c=='e' || c=='o');
}

string unoreverse(string s) {
    string rev = "";
    for(int i = s.length()-1; i >= 0; i--) {
        rev += s[i];
    }
    return rev;
}

string encrypt(string word) {
    string noVowel = "";
    for(char c : word) {
        if(!Kucing(c)) noVowel += c;
    }
    string reversed = unoreverse(noVowel);
    int asciiVal = (int)word[0];
    string asciiStr = to_string(asciiVal);
    int mid = reversed.length() / 2;
    string encrypted = reversed.substr(0, mid) + asciiStr + reversed.substr(mid);
    return encrypted;
}

string decrypt(string encrypted) {
    string left = "", right = "", numStr = "";
    int i = 0;
    while(i < encrypted.length() && !isdigit(encrypted[i])) {
        left += encrypted[i];
        i++;
    }
    while(i < encrypted.length() && isdigit(encrypted[i])) {
        numStr += encrypted[i];
        i++;
    }
    while(i < encrypted.length()) {
        right += encrypted[i];
        i++;
    }
    int asciiVal = stoi(numStr);
    char firstChar = (char)asciiVal;
    string reversed = left + right;
    string originalConsonants = unoreverse(reversed);
    string partialOriginal = firstChar + originalConsonants.substr(1);
    return partialOriginal;
}

int main() {
    int choice;
    string input;
    cout << "1. Encrypt\n2. Decrypt\nChoice: ";
    cin >> choice;
    cout << "Input: ";
    cin >> input;
    if(choice == 1) {
        cout << "Encrypted: " << encrypt(input) << endl;
    } else if(choice == 2) {
        cout << "Decrypted: " << decrypt(input) << endl;
    } else {
        cout << "Invalid choice" << endl;
    }
    return 0;
}
