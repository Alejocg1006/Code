#include <iostream>
using namespace std;

void conjetura_collatz(int nusuario)
{	
	while (nusuario != 1) 
	{
		if (nusuario%2==0) 
		{
			nusuario=nusuario/2;
			cout<<nusuario<<" ";
		}
		else 
		{
			nusuario=nusuario*3 +1;
			cout<<nusuario<< " ";
		}
	}
}

int main() 
{	
	int nusuario;
	cout <<"Ingrese un número entero para ver la conjetura de Collatz: ";
	cin >> nusuario;
	cout<<"La secuencia de Collatz para el número "<<nusuario<<" es:"<<endl;
	cout<<nusuario<< " ";
	conjetura_collatz(nusuario);
	
}


