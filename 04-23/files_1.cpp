//Writing to files
#include <iostream>
#include <fstream> // this gives me ofstream and ifstream


using namespace std;

int main()
{
    // ofstream is for output (writing to a file)
    ofstream ofs;
    // Open a file for writing
    // if animals.txt didn't exist already,
    // this line would make it
    ofs.open("animals.txt");

    // by default, ofstreams *overwrite* the file

    // Write to it
    ofs << "Duck\nCow\nGoat\nParrot\n";

    // Close the file
    ofs.close();
    return 0;
}