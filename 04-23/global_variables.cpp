#include <iostream>
using namespace std;

int harry_potter = 1;

void goblet_of_fire() {
    int cedric = 4;
    harry_potter++;
}

int main(int argc, char const *argv[])
{
    goblet_of_fire();

    cout << harry_potter << endl;
    
    return 0;
}