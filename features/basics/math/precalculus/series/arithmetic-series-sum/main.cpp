#include <iostream>
using namespace std;
// Find Sum of a Finite Arithmetic Series
// Also known as finding the Sum of n Natural Numbers

// KA Ref: https://www.khanacademy.org/math/precalculus/x9e81a4f98389efdf:series#x9e81a4f98389efdf:arith-series
// Math-Only-Math Ref: https://www.math-only-math.com/sum-of-first-n-natural-numbers.html
// Quora Ref: https://www.quora.com/Who-invented-the-formula-n-n-1-2

/**
 *
 * @param noTerms       the total number of terms in the arithmetic series
 * @param firstTerm     the first term in the arithmetic series
 * @param lastTerm      the last term in the arithmetic series
 * @return              the sum of a finite arithmetic series
 */
int ArithmeticSeriesSum(int noTerms, int firstTerm, int lastTerm);

int main() {
    int noTerms = 5;
    int firstTerm = 2;
    int secondTerm = 5;
    int thirdTerm = 7;
    int fourthTerm = 10;
    int lastTerm = 13;
    cout << ArithmeticSeriesSum(noTerms, firstTerm, lastTerm);
    return 0;
}

int ArithmeticSeriesSum(int noTerms, int firstTerm, int lastTerm)
{
    // Finds the Sum of a Finite Arithmetic Series
    int sum;
    sum = noTerms*(lastTerm+firstTerm)/2;
    return sum;
}
