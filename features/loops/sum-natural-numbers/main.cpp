#include <iostream>
using namespace std;

// Sum of Natural Numbers: n(n + 1)/2

int main() {
    int n, i = 1, sum = 0;
    cout << "Enter n: ";
    cin >> n;

    while(i <= n)
    {
        sum += i;
        i++;
    }

    cout << "Sum of Natural Numbers is " << sum;

    return 0;
}
