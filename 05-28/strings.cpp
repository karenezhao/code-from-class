#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int countVowels(char *str) {
    int num_vowels = 0;
    int size = strlen(str);
    for (int i = 0; i < size; i++) {
        if (tolower(str[i]) == 'a' || tolower(str[i]) == 'e' ||
            tolower(str[i]) == 'i' || tolower(str[i]) == 'o' ||
            tolower(str[i]) == 'u') {
            num_vowels++;
        }
    }

    return num_vowels;
}

string removeSpaces(string s) {
    string s_without_spaces = "";

    for (int i = 0; i < s.length(); i++) {
        // if this character that I'm looking at is a 
        // space character
        if (!isspace(s[i])) {
            // keep it
            // (i.e., add it to the new string)
            s_without_spaces += s[i];
        } 
    }

    return s_without_spaces;
}

int main(int argc, char *argv[])
{
    char s[] = "hi mom";
    char s2[] = "rhythm";
    char s3[] = "The quick brown fox jumps over the lazy dog.";
    char s4[] = "HI MOM";

    cout << countVowels(s) << endl;
    cout << countVowels(s2) << endl;
    cout << countVowels(s3) << endl; 
    cout << countVowels(s4) << endl; 

    string cpps = "hi mom";
    string cpps2 = "rhythm";
    string cpps3 = "The quick brown fox jumps over the lazy dog.";
    string cpps4 = "HI MOM";

    cout << removeSpaces(cpps) << endl;
    cout << removeSpaces(cpps2) << endl;
    cout << removeSpaces(cpps3) << endl; 
    cout << removeSpaces(cpps4) << endl; 

    return 0;
}