#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, y, R, xp, xk, dx;

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "------------------------" << endl;
    cout << "|" << setw(4) << "x" << " |"
        << setw(6) << "y" << " |" << endl;
    cout << "------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -1 - R) {
            y = 1;
        }
        else if (-1 - R < x && x <= -1) {
            y = sqrt(R * R - pow(x + 1, 2));
        }
        else if (-1 < x && x <= 2) {
            y = -R;
        }
        else if (2 < x && x <= 4) {
            y = R * (x - 2) / 2 - R;
        }
        else {
            y = R + x - 4;
        }

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }

    cout << "------------------------" << endl;
    return 0;
}