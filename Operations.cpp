#include "Operations.h"

int Addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int Soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}

float Divison(int a, int b)
{
	float resultat;
	
	resultat = a/b;
	
	return resultat;
}

float Multiplication(int a, int b)
{
	float resultat;

	resultat = a*b;

	return resultat;
}

int Factoriel(int nb)
{
	int resultat;

	for(int i = nb -1; i > 0; i--)
	{		
		resultat = nb * i;
	}
	
	return resultat;
}