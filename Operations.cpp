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

int exposant(int nb,int exp)
{
	float res;
	
	res = nb**exp;
	
	return res;
	
	
}