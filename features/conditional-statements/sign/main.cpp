#include <iostream>
using namespace std;

void Sign(int n);

int main() {
    int num = 8;
    Sign(num);

    num = -5;
    Sign(num);
    return 0;
}

void Sign(int n)
{
    if(n >= 0)
    {
        cout << "positive" << endl;
    }
    else
    {
        cout << "negative" << endl;
    }
}