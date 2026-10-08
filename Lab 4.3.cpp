#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, xp, xk, dx, x, F;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    cout << "Enter start x: ";
    cin >> xp;

    cout << "Enter end x: ";
    cin >> xk;

    cout << "Enter step dx: ";
    cin >> dx;

    if (dx <= 0 || xp > xk)
    {
        cout << "Invalid interval or step!" << endl;
    }
    else
    {
        cout << fixed << setprecision(4);
        cout << "------------------------" << endl;
        cout << "|     x    |     F     |" << endl;
        cout << "------------------------" << endl;

        x = xp;

        while (x <= xk + 1e-9)
        {
            if (x < 3 && b != 0)
            {
                F = a * x * x - b * x + c;

                cout << "| " << setw(8) << x
                    << " | " << setw(9) << F
                    << " |" << endl;
            }
            else if (x > 3 && b == 0)
            {
                if (x == c)
                {
                    cout << "Division by zero!" << endl;
                }
                else
                {
                    F = (x - a) / (x - c);

                    cout << "| " << setw(8) << x
                        << " | " << setw(9) << F
                        << " |" << endl;
                }
            }
            else
            {
                if (c == 0)
                {
                    cout << "Division by zero!" << endl;
                }
                else
                {
                    F = x / c;

                    cout << "| " << setw(8) << x
                        << " | " << setw(9) << F
                        << " |" << endl;
                }
            }

            x += dx;
        }

        cout << "------------------------" << endl;
    }

    return 0;
}