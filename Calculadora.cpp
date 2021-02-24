#include <iostream>
 // definir el namedsapce
 
 using namespace std;
 
 // definir las clases
 
 class Calculadora {
 	// define metodos publicos
 	public:
 		int Calcular (int, char , int );
 		
 };
 int main (){
 	// definir variables
 	
 	char operador;
 	int numero1, numero2,resultado;
 	Calculadora objCalculadora;
 	cout<<"INGRESE LOS VALORES POR EJEMPLO (1+1):" << endl;
 	cin >> numero1 >> operador >> numero2;
 	// se retorna en resultado la operacion del objeto
 	resultado = objCalculadora.Calcular(numero1,operador,numero2);
 	
 	cout<<"el resultado es:" << resultado << endl;
 	
 	// solicitar los valores
 	
 	
 }
// define el motodo publico de la clase
int Calculadora:: Calcular(int intNumero1, char chrOperador, int intNumero2) {
	switch(chrOperador) {
		case '+':
			return intNumero1 + intNumero2;
		case '-':
			return intNumero1 - intNumero2;
		case '*':
			return intNumero1 * intNumero2;
			
		case '/':
		if (intNumero2 > 0) 
		{
		return intNumero1 / intNumero2;
		}
		
		else { cout << "no se puede dividir dentro de 0";
		}
			
			 
		default:
		return 0;
				
	}
}
