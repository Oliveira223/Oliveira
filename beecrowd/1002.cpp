//area do ciruclo (usando Classes)
#include <iostream>
#include <iomanip>

using namespace std;

class Circle
{
	public:
		Circle(double radius); //construtor. Será chamado quando um objeto da classe Circle for criado.

		//O contrutor precisa ter o mesmo nome da classe para que o compilador o identifique


		double area() const;  //Método. Função da classe que retorna a area. Const indica que esse método não modifica nenhum membro da classe

	private:
		double radius; //atributo privado que armazena o raio do circulo, só pode ser acessado e modificado por métodos da própria classe.
};


	Circle::Circle(double vradius) //estamos definindo o construtor (chamado Circle) da classe "Circle";
	{	
	radius = vradius; //quando um objeto Circle é criado, o valor fornecido para "vradius" é atribuido ao atributo "radius" do objeto.
	}

	double Circle::area() const

	//o método retorna um valor do tipo "double", estamos definindo o método "area" da classe "Circle". () indica que o método não aceita nenhum parametro. Const indica que o método não modifica nenhum membro.

	{	
		return 3.14159 * radius * radius;
	}


int main()
{
	double r;
	cin >> r;

	Circle c(r); //cria um objeto circle chamado c e inicia seu raio com valor de "r"

	cout << fixed << setprecision(4); //define a saida para usar notação de ponto fixo, isso é, a virgula estaá sempre no mesmo lugar, por exemplo, sempre na após a segunda casa.

	cout << "A=" << c.area() <<endl; //c.area() chama o método area do objeto c.

return 0;
}


























