#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

class giaiPhuongTrinh2
{
public:
	giaiPhuongTrinh2();
	giaiPhuongTrinh2(double _a, double _b, double _c);
private:
	double a, c, b;

	double x1, x2;

	double im, re;

	double delta;
	bool coAo;

	void input();
	void giaiNghiemPhanBiet();
	void giaiNghiemDau();
	void giaiNghiemThuHai();
	void nghiemThat();
	void nghiemAo();
	void ketQua();
	void setA(double);
	void setB(double);
	void setC(double);
};


int main()
{
	giaiPhuongTrinh2 myProblem;
	system("pause");
	return 0;
}

void giaiPhuongTrinh2::input()
{
	double _a;
	double _b;
	double _c;
	cout << "chao mung toi chuong trinh giai phunog trinh bac 2" << endl;
	cout << " ta co cong thuc tong quat nhu sau: A*x^2 +B.x+C" << endl;
	cout << "dien so cua a" << endl;
	cin >> _a;
	setA(_a);
	cout << "dien so cua b" << endl;
	cin >> _b;
	setB(_b);
	cout << "dien so cua c " << endl;
	cin >> _c;
	setC(_c);
	cout << "\r\n";

};

giaiPhuongTrinh2::giaiPhuongTrinh2()
{
	input();
	giaiNghiemPhanBiet();
	ketQua();

}

giaiPhuongTrinh2::giaiPhuongTrinh2(double _a, double _b, double _c)
{
	setA(_a);
	setB(_b);
	setC(_c);
	giaiNghiemPhanBiet();
	ketQua();
}
void giaiPhuongTrinh2::giaiNghiemPhanBiet()
{
	delta = b * b - 4 * a * c;
	if (delta >= 0)
	{
		coAo = false;
	}
	else
	{
		coAo = true;
	}
}
void giaiPhuongTrinh2::giaiNghiemDau()
{
	x1 = (-b + sqrt(delta)) / (a * 2);
}
void giaiPhuongTrinh2::giaiNghiemThuHai()
{
	x2 = (-b - sqrt(delta)) / (2 * a);
}

void giaiPhuongTrinh2::ketQua()
{
	if (coAo)
	{
		cout << "gia tri cua 2 nghiem" << endl;
		nghiemThat();
		nghiemAo();
		cout << re << "+" << im << "i" << endl;
		cout << re << "-" << im << "i" << endl;
	}
	else
	{
		giaiNghiemDau();
		giaiNghiemThuHai();
		cout << "khi x1 =0 thi x2 = " << x2 << "or" << x1 << endl;

	}
}
void giaiPhuongTrinh2::nghiemThat()
{
	re = -b / 2 * a;

}
void giaiPhuongTrinh2::nghiemAo()
{
	im = sqrt(-delta) / (2 * a);
}
void giaiPhuongTrinh2::setA(double input)
{
	a = input;
}
void giaiPhuongTrinh2::setB(double input)
{
	b = input;
}
void giaiPhuongTrinh2::setC(double input)
{
	c = input;
}