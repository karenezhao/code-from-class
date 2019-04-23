#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

string translate(string word);

int main(int argc, char *argv[])
{
    ifstream ifs;
    ifs.open("lyrics.txt");

    if (!ifs) {
        cerr << "Open failed" << endl;
        return 1;
    }

    string word;

    // I can use ifs like cin
    // (when I get a string, it takes one 
    // whitespace-separated word)
    // (if you tried to get an int variable,
    // it would take an int)

    // (ifs >> word) gets the next word, 
    // assuming it's there,
    // and also returns false when you tried
    // to read past the end of the file
    while (ifs >> word) {
        cout << translate(word);

        // let's preserve the whitespace now
        // while there's whitespace to be read,
        // read it and then output it
        // ifs.peek looks at the next character to read, without advancing the "cursor"
        while (isspace(ifs.peek())) { // while the next character to read is whitespace
            // read it
            char space_character = ifs.get();
            // output it
            cout << space_character;
        }
    }


    return 0;
}

string translate(string word) {
    if (word == "snow") {
        return "snjór";
    } else if (word == "mountain") {
        return "montaña";
    } else if (word == "queen.") {
        return "女王";
    } else {
        return word;
    }
}