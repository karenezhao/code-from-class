#include <iostream> // gives me cin and cout
using namespace std;

int main() {
    int x; // declares x--makes space for it in memory
    cout << "Enter a number: ";
    cin >> x; // takes one int from the terminal

    if (x%3 == 0) {
        // if it's divisible by 3, output fizz
        cout << "fizz" << endl;
    } else {
        // if we got here, x isn't divisible by 3
        // if it's not divisible by 3, output the number
        cout << x << endl;
    }
    

    return 0;
}