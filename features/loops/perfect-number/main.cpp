#include <iostream>
using namespace std;

// Perfect number is the sum of the factors for the original number equal to double the original number
int main() {
    int n, i, sum = 0;

    cout << "Enter n: ";
    cin >> n;

    // Get sum of factors
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            sum = sum + i;
    }

    // Check if double number equals the sum, if true, then
    if(2 * n == sum)
        cout << n << " is a Perfect Number";
    else
        cout << n << " is not a Perfect Number";

    return 0;
}
