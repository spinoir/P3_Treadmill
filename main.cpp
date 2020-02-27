//Treadmill
#include <iostream>
using namespace std;
int main() {
    double mph(0), secPerMile(0);
    int minPerMile(0);

    cout << "Enter miles per hour: ";
    cin >> mph;
    double minSec = 60 / mph;
    minPerMile = static_cast<int>(minSec);
    secPerMile = (minSec - minPerMile) * 60;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    cout << minPerMile << " minutes " << secPerMile << " seconds per mile" << endl;


return 0;
}
