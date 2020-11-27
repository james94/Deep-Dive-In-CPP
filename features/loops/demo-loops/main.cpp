#include <iostream>
using namespace std;

int main() {
    int i = 0;
    // while loops checks condition at beginning of loop
    while(i < 10)
    {
        cout << "while\n";
        i++;
    }

    i = 0;
    // do while loops iterate first time, then check condition at end
    do
    {
        cout << "do...while\n";
        i++;
    }while(i < 10);

    // for loops check condition at the beginning of loop, then inc i at end
    for(i = 0; i < 10; i++)
    {
        cout << i << " for\n";
    }

    return 0;
}
