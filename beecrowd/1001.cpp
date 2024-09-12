#include <iostream>

using namespace std;

class Calculator 
{
	private:
		int a;
		int b;

	public:
		Calculator(int a, int b);
		int add() const;
};

	Calculator::Calculator(int va, int vb)
		{
			a = va;
			b = vb;
		}

	int Calculator::add() const
		{
			return a + b;
		}

int main()
{
	int a, b;
	cin >> a;
	cin >> b;

	Calculator c(a, b); //agora "c" faz parte da familia Calculator e recebe o valor de a e de b, como mostrado na linha 12, ele é um objeto e tem aqueles dois valores.

	cout << "x = " << c.add()<<endl;

	//Agora, com os valores do objeto "c", a função add faz seu trabalho. 
}























