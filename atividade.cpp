//Alunas: Rafaela Jhennyfer Oliveira, Taila Mariana de Moura.

#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

int main ()
{

	setlocale(LC_ALL, "portuguese");
	
	int op, i, bin, dec, n1[12], n2[12], res, resto = 0;
	
	cout << "\t Conversões Binárias \n" << endl;
	cout << "1. Números binários para decimais \n";
	cout << "2. Números decimais para binários \n";
	cout << "3. Sair \n" << endl;
	cout << "Digite a opção desejada: ";
	cin >> op;
	
	switch(op)
	{
		case 1:
			system("cls");
			
			cout << "Digite o número em binário: ";
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
			
			cout << "\nA conversão para decimal é: "; 
			cout << res ;
			
			break;
		
		case 2:
			system("cls");
			
			cout << "Digite o número em decimal: ";
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
				
				cout << "\nA conversão para binário é: ";
				
				for (i = 11; i >= 0; i--) 
				{		
					cout << n2[i];
				}
			
			break;
		
		case 3:
			break;
		
		default:
			cout << "Opção inválida!! Digite novamente: "; 
			cin >> op;
			
			break;
	}
	
	
		return 0;
}