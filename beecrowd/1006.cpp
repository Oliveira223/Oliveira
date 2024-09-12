#include <iostream>
#include <iomanip>

using namespace std;

class Calculator
{
        public:
        Calculator(double a, double b, double c);
        double Media() const;

        private:
        double a;
        double b;
	double c;
};

        Calculator::Calculator(double va, double vb, double vc)
        {
        a = va;
        b = vb;
	c = vc;
        }

        double Calculator::Media() const
        {
        return ((a * 2.0) + (b * 3.0) + (c * 5)) / 10.0;
        }


int main()
{

        double a;
        cin >> a;

        double b;
        cin >> b;

	double c;
	cin >> c;

        Calculator m(a, b, c);

        cout << fixed << setprecision(1);
        cout << "MEDIA = " << m.Media() << endl;
}
