#include <iostream>
using namespace std;

// Display Grades for Student Marks
void Grades(int m1,int m2,int m3);

int main() {
    int m1, m2, m3;
    cout << "Enter 3 marks of subjects";
    cin >> m1 >> m2 >> m3;
    Grades(m1, m2, m3);
    return 0;
}

// Check average marks and display grades
void Grades(int m1,int m2,int m3)
{
    float Total,Avg;

    //write nested if statements to print grades
    Total = m1+m2+m3;
    Avg = Total/3.0;
    if(Avg >= 90)
    {
        cout << "A";
    }
    else if(Avg >= 80 && Avg < 90)
    {
        cout << "B";
    }
    else if(Avg >= 70 && Avg < 80)
    {
        cout << "C";
    }
    else if(Avg >= 60 && Avg < 70)
    {
        cout << "D";
    }
    else
    {
        cout << "F";
    }
}
