#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float x, y, z, si;

    // Input principal (x), time (y), and interest rate (z)
    cout << "Enter principal amount (x): ";
    cin >> x;

    cout << "Enter time period in years (y): ";
    cin >> y;

    cout << "Enter annual interest rate (z): ";
    cin >> z;

    // Calculate simple interest
    si = (x * y * z) / 100.0;

    // Display the result rounded to 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Simple Interest = " << si << endl;

    return 0;
}
