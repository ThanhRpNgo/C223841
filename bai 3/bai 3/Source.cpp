
#include <math.h>
#include<iostream>
using namespace std;

class Ptb2
{
public:
    float b, c;
    float a;
    Ptb2(float m = 0, float n = 0, float o = 0);
    void Nhap(float x, float y, float z);
    void Xuat();
    void Giai_B2();
};
Ptb2::Ptb2(float m, float n, float o)
{
    a = m;
};

void Ptb2::Nhap(float x, float y, float z)
{
    b = x;
    c = y;
};


void Ptb2::Giai_B2()
{
    float delta;
    if (a != 0)
    {
        delta = b * b - 4 * a * c;
        cout << "delta = " << delta;
        if (delta < 0)
            cout << "Phuong trinh vo nghiem!";
        else if (delta = 0)
            cout << "Phuong trinh co nghiem x = " << (-b) / (2 * a);
        else
            cout << "Phuong trinh co 2 nghiem\n\t x1 = " << ((-b) - sqrt(delta)) / (2 * a) << " ;  x2 = " << ((-b) + sqrt(delta)) / (2 * a);
    }
};

int main()
{
    Ptb2 x;
    float a, b, c;
    cout << "Nhap gia tri a, b, c: ";
    cin >> a;
    cin >> b;
    cin >> c;
    x.Nhap(a, b, c);
    cout << "Phuong trinh co dang: ";
    x.Xuat();
    return 0;
}

