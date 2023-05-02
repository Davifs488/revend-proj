#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int n;
	cout << "Diga um numero inteiro nao negativo\n";
	cin >>n;
	
	int soma = 0;
	int cont = 1;
	
	while (cont <= n) {
		soma += cont;
		cont ++ ;
	}
	cout << " Soma dos numeros de 0 ate" << n << " = " << soma << endl;
	return 0;
}
