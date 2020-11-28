#include <iostream>
using namespace std;

int main() {
    int n, i;

    cout << "Enter n: ";
    cin >> n;

    cout << "Factors of Number: " << n << endl;
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            cout << i << endl;
    }

    return 0;
}
