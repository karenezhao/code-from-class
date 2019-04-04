#include <iostream>
using namespace std;

int n = 42; // this is a global variable--I can use it inside of any function

int main(int argc, char *argv[])
{
    cout << n << endl;

    n++;

    cout << n << endl;    

    return 0;
}