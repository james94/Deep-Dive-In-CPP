#include <iostream>
using namespace std;

// Khan Academy Economics Reference: Interest (part 2)
// url: https://www.khanacademy.org/economics-finance-domain/core-finance/interest-tutorial/interest-basics-tutorial/v/interest-part-2

// Khan Academy College Macroeconomics Reference: Intro to interest
// url: https://www.khanacademy.org/economics-finance-domain/ap-macroeconomics/ap-financial-sector/financial-assets-ap/v/introduction-to-interest

/**
 * Calculate Simple Interest
 *
 * @param P     initial principle is the original amount of money you are borrowing
 * @param T     years is amount of time you are going to borrow the money for
 * @param R     interest rate percentage that you are borrowing at
 * @return      simple interest is the amount of money you owe after borrowing P principle for T years at R rate
 */
int SimpleInterest(int P, int T, int R);

int main() {
    int P = 50, T = 20;
    float R = 15; // 15%

    cout << "Simple Interest is " << SimpleInterest(P, T, R) << endl;
    return 0;
}

int SimpleInterest(int P, int T, int R)
{
    float SI;
    SI = P*(1 + T * (R/100.0));
    return SI;
}