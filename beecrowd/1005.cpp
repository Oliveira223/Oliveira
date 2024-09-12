#include <iostream>
#include <iomanip>

using namespace std;

class Calculator
{
	public: 
	Calculator(double a, double b);
	double Media() const;

	private:
	double a;
	double b;
};

	Calculator::Calculator(double va, double vb)
	{
	a = va;
	b = vb;
	}

	double Calculator::Media() const
	{
	return ((a * 3.5) + (b * 7.5)) / 11.0;
	}

	
int main()
{

	double a;
	cin >> a;

	double b;
	cin >> b;
	
	Calculator c(a, b);

	cout << fixed << setprecision(5);
	cout << "MEDIA = " << c.Media() << endl;
}
