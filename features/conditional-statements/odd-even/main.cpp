#include <iostream>
using namespace std;

void OddEven(int n);

int main() {
    int num = 7;
    OddEven(num);

    num = 4;
    OddEven(num);
    return 0;
}

void OddEven(int n)
{

    //write condition here to check "odd" or "even"
    if(n%2 == 0)
    {
        cout << "even" << endl;
    }
    else
    {
        cout << "odd" << endl;
    }
}
