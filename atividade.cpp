//Alunas: Rafaela Jhennyfer Oliveira, Taila Mariana de Moura.

#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

int main ()
{

	setlocale(LC_ALL, "portuguese");
	
	int op, i, bin, dec, n1[12], n2[12], res, resto = 0;
	
	cout << "\t Convers�es Bin�rias \n" << endl;
	cout << "1. N�meros bin�rios para decimais \n";
	cout << "2. N�meros decimais para bin�rios \n";
	cout << "3. Sair \n" << endl;
	cout << "Digite a op��o desejada: ";
	cin >> op;
	
	switch(op)
	{
		case 1:
			system("cls");
			
			cout << "Digite o n�mero em bin�rio: ";
			cin >> bin;
			
			for (i = 0; i <= 12; i++)
			{
				n1[i] = bin % 10;
				bin = bin /10;
			}
			
			for (i = 11; i >= 0; i--)
			{
				res = (resto*2) + n1[i];
				resto = res;
			}
			
			cout << "\nA convers�o para decimal �: "; 
			cout << res ;
			
			break;
		
		case 2:
			system("cls");
			
			cout << "Digite o n�mero em decimal: ";
			cin >> dec;
			
			for (i = 0; i <= 12; i++)
				
				{
					if (dec >= 1)
					{
						n2[i] = dec % 2;
						dec = dec /2;
					}
					
					else
					{
						n2[i] = 0;
					}
				}
				
				cout << "\nA convers�o para bin�rio �: ";
				
				for (i = 11; i >= 0; i--) 
				{		
					cout << n2[i];
				}
			
			break;
		
		case 3:
			break;
		
		default:
			cout << "Op��o inv�lida!! Digite novamente: "; 
			cin >> op;
			
			break;
	}
	
	
		return 0;
}