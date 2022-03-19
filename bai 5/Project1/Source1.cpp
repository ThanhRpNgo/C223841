#include <iostream>
#include <math.h>
using namespace std;
class CPhuongTrinh {
    int a, b, c;

public:

    void set_values(int, int, int);
    int GiaiPhuongTrinh(double x1, double x2) {
        if (a = b = c == 0)     return 1;
        else
            if (a == 0 && b != 0 && c != 0)   return 0;
            else
            {
                float d;
                d = b * b - 4 * a * c;
                if (d < 0)    return -1;
                if (d == 0)    return 2;
                if (d > 0)    return 3;
            }
    }
};
void CPhuongTrinh::set_values(int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    double x1, x2;
    CPhuongTrinh pt;
    pt.set_values(1, 2, 3);

    cout << pt.GiaiPhuongTrinh(x1, x2);

    if (pt.GiaiPhuongTrinh(x1, x2) == -1)
        cout << "Phuong trinh co vo so nghiem" << endl;
    else if (pt.GiaiPhuongTrinh(x1, x2) == 0)
        cout << "Phuong trinh co nghiem don x1 = " << -c / b << endl;
    else if (pt.GiaiPhuongTrinh(x1, x2) == 1)
        cout << "Phuong trinh vo nghiem" << endl;
    else if (pt.GiaiPhuongTrinh(x1, x2) == 2)
        cout << "Phuong trinh co nghiem kep x1 = x2 = " << -b / 2 * a << endl;
    else if (pt.GiaiPhuongTrinh(x1, x2) == 3)
        cout << "Phuong trinh co 2 nghiem phan biet x1 = " << (-b + sqrt(d)) / 2 * a << "x2 = " << (-b - sqrt(d)) / 2 * a << endl;
    system("pause");
    return 0;
}