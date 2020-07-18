#include <iostream>
using namespace std;

int main() {
    // Ask for users full name
    string str;
    cout << "May I know your name?";
    getline(cin, str);
    // Then print it to the screen
    cout << "Hello " << str << endl;
    return 0;
}
