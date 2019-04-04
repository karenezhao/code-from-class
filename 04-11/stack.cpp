#include <iostream>
#include <cstdlib>
using namespace std;

int sum(int a, int b){
    cout << a+b << endl; // just printing. it's not giving the result back to whoever called the function

    // we're missing a return statement
    // sum is returning 0 on my machine
    // but this is called UNDEFINED BEHAVIOR

    return a+b;
}

int main() {
    int result = 42;
    int x =10, y =20;
    result = sum(x, y);
    cout<< result << endl;

    return 0;
}