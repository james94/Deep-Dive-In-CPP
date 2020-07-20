#include <iostream>
using namespace std;

// cppreference: Enumeration Declaration
// url: https://en.cppreference.com/w/cpp/language/enum

enum day {mon, tue, wed, thu, fri, sat, sun};
enum dept {cs, it, ec, mech};

// wiki ref: typedef
// url: https://en.wikipedia.org/wiki/Typedef

// typedef purpose is to make program more readable
typedef int marks;

int main() {
    // enum
    day d;
    d = tue;

    dept dep = cs;

    cout << d << endl;
    cout << mon << endl;
    cout << tue << endl;
    cout << wed << endl;
    cout << thu << endl;
    cout << fri << endl;
    cout << sat << endl;
    cout << sun << endl;

    // typedef
    marks m1, m2;
    m1 = 50;
    m2 = 90;
    return 0;
}
