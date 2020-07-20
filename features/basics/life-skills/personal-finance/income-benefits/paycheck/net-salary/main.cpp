#include <iostream>
using namespace std;

// TODO: Incorporate the following references into the program
// Khan Academy Ref: Impact of W-4 allowances on paycheck
// url: https://www.khanacademy.org/college-careers-more/personal-finance/income/paycheck/v/allowance-impact-on-paycheck

// Khan Academy Ref: Anatomy of a paycheck
// url: https://www.khanacademy.org/college-careers-more/personal-finance/income/paycheck/v/anatomy-of-a-paycheck

// Khan Academy Ref: Calculating federal taxes and take home pay
// url: https://www.khanacademy.org/college-careers-more/personal-finance/pf-taxes/pf-personal-taxes-tutorial/v/calculating-federal-taxes-and-take-home-pay

// Khan Academy Ref: Calculating state taxes and take home pay
// url: https://www.khanacademy.org/college-careers-more/personal-finance/pf-taxes/pf-personal-taxes-tutorial/v/calculating-state-taxes-and-take-home-pay


int main() {
    float basic; //1000
    float percentAllow; //20
    float percentDeduct; //5
    float netSalary; //Expected: 1150

    cout << "Enter Basic Salary:" << endl;
    cin >> basic;

    cout << "Enter percent of Allowances:" << endl;
    cin >> percentAllow;

    cout << "Enter percent of Deductions:" << endl;
    cin >> percentDeduct;

    netSalary = basic + basic*percentAllow/100 - basic*percentDeduct/100;
    cout << "Net Salary is:" << netSalary << endl;
    return 0;
}
