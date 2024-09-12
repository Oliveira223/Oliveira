//bee1000 - Hello World!

/* Jeito comum:

	#include <iostream>
	int main(){
	std::cout << "Hello World!" << std::endl;
	}
	
*/



// Utilizando classes.

/*
	Classe: Uma classe é como um molde ou uma DEFINIÇÃO DE UM TIPO DE OBJETO. Ela especifica quais ATRIBUTOS e MÉTODOS os objetos desse tipo terão.

	Objeto: Um objeto é uma instância de uma classe. Quando você cria um objeto, está criando uma entidade específica que segue a estrutura definida pela classe. Por exemplo, se você tem uma classe Carro, pode criar vários objetos Carro, cada um com suas próprias características (como cor, modelo, etc.).

*/


#include <iostream>
using namespace std;

class Greeting //(saudação)
{
	private: //só é possível acessar de dentro da classe
		
	public:	//é possível ser acessado por fora, geralmente chamada pela função principal (main)

	string say_hello() const;
};

/*
 -------------------------------Criando um Método------------------------------
	Um método é um conjunto de procedimentos ou etapas organizadas de forma lógica e sistemática para alcançar um determinado objetivo ou resolver um problema específico.

	Em programação, é uma função definida DENTRO de uma CLASSE que descreve o comportamento dos OBJETOS desssa classe.

	UM MÉTODO É UMA FUNÇÃO. 

	Porém uma função associada à uma classe.

*/



	string Greeting::say_hello() const { 
	
 	//implementei o método(função) "say_hello" da classe "Greeting". "const" para evitar que a função main altere acidentalmente este método. 

	return "Hello World!";
}

int main()
{

	Greeting g;
	
	 //é necessário criar um objeto - nesse caso "g" da classe "Greeting" para poder chamar o método say_hello a seguir pois agora o objeto g tem ACESSO a todos os métodos da classe Greeing.

	cout << g.say_hello() << endl;

	//Basicamente agora o "g" faz parte da "familia" Greeting e por isso tem acesso à todos seus métodos (funções).


}


















