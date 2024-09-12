#include <iostream>
#include <iomanip>

using namespace std;

class Calculator
{
	public:

	Calculator(int a, int b); //contrutor
	int Soma() const; //função que retorna soma
	int Prod() const;
	private:
		int a, b; 

};

	Calculator::Calculator(int va, int vb) //definindo como o contrutor irá agir
	{
		a = va;
		b = vb;
      //quando o obj. calculator for criado ira atribuir os valor )int a, int b) à va e vb
	}

	int Calculator::Soma() const //método que retorna um inteiro (soma). () = n aceita param.
	{
		return a + b;
	}

	int Calculator::Prod() const
	{
		return a * b;
	}



	int main()
{
	int a;
	cin >> a;

	int b;
	cin >>b;

	Calculator c(a, b);
	//  Soma   //
cout << "SOMA = " << c.Soma() << endl;
	// Produto //
cout << "PROD = " << c.Prod() << endl;
}
















