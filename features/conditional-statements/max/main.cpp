#include <iostream>
using namespace std;

void max(int x, int y);

int main() {
    int x = 8;
    int y = 4;
    max(x, y);
    return 0;
}

void max(int x, int y)
{
    if(x > y)
    {
        cout << x;
    }
    else
    {
        cout << y;
    }
}