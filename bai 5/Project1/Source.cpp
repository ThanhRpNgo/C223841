#include <stdio.h>
#include <math.h>


class giaipt2
{
public:
	float a;
	float b;
	float c;
	float delta = b * b - 4 * a * c;
	void set_values(int, int, int);
	int bienso(double x1, double x2)
	{
		if (delta == 0)
		{
			x1 = x2 = -b / (2 * a);
			return 0;
		}
		else if (delta < 0)
		{
			x1 = x2 = 0;
			return 1;
		}
		else
		{
			delta = sqrt(delta);
			x1 = (-b + delta) / (2 * a);
			x2 = (-b - delta) / (2 * a);
			return 2;

		}

	};
};
void giaipt2::set_values(int a1, int b1, int c1)
{
	a = a1;
	b = b1;
	c = c1;
};

void main()
{
	double x1;
	double x2;
	giaipt2 so;
	giaipt2 ketQua;
	ketQua.set_values(1, 2, 3);
	if (ketQua.bienso(x1, x2) == 0);
	printf("phuong trinh co vo so nghiem");

}