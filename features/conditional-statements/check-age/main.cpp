#include <iostream>
using namespace std;

void CheckAge(int age);

int main() {
    int age;
    cout << "Enter age";
    cin >> age;
    CheckAge(age);
    return 0;
}

void CheckAge(int age)
{

    //write conditional statement here
    //output must be all in lower case
    if(age >= 12 && age <= 50)
    {
        cout << "young";
    }
    else
    {
        cout << "not young";
    }
}