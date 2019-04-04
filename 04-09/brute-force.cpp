#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    for (int horses = 0; horses <= 100; horses++) { // tries 0 to 100 horses
        for (int pigs = 0; pigs <= 100; pigs++) { // tries 0 to 100 pigs
            // horses + pigs + rabbits = 100
            // we immediately know how many rabbits we bought
            int rabbits = 100 - horses - pigs;
            if (rabbits >= 0) {
                // it's possible we have a satisfying solution; now check the price
                // Horses cost $10, pigs cost $3, and rabbits are only $0.50
                double price = horses * 10 + pigs * 3 + rabbits * 0.50;
                if (price == 100.00) {
                    // we found a solution! print it out
                    // if we got here, we bought exactly 100 animals for exactly $100
                    cout << horses << " horses, ";
                    cout << pigs << " pigs, ";
                    cout << rabbits << " rabbits\n";
                }
            }
        }
    }

    return 0;
}