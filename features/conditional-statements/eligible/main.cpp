#include <iostream>

using namespace std;

void Eligible(int age);

int main() {
    int age;
    cout << "Enter age";
    cin >> age;
    Eligible(age);
    return 0;
}

void Eligible(int age)
{

    //write condition here to check if person is eligible
    if(age < 12 || age > 50)
    {
        cout << "eligible";
    }
    else
    {
        cout << "not eligible";
    }
}
