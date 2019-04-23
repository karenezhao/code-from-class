// Reading from files
#include <iostream>
#include <fstream> // gives me ifstream
#include <string> // gives me getline

using namespace std;

int main()
{
    // ifstream is for input (reading from a file)
    ifstream ifs;

    // Open a file for reading
    ifs.open("animals.txt");

    // open will fail if file does not exist
    if (!ifs) {
        cerr << "Open failed" <<endl;
        return 1;
    }

    string line;

    while (1) {
        // getline takes the current line from ifs
        // and stores it into the line string variable
        getline(ifs, line);
        if(!ifs)
            break;
        cout << line << endl; //process the line
    }

    // Close the file
    ifs.close();
    return 0;
}