#include "main.h"

/**
 * test_isalpha - Teste la fonction _isalpha
 *
 * @n : Nombre à transmettre à la fonction _isalpha
 */
void test_isalpha(int n)
{
	int r;

	r = _isalpha(n);
	_putchar(r + '0');
	_putchar('\n');
}

/**
 * principal - vérifiez le code pour les étudiants de l'école Holberton.
 *
 * Retour : toujours 0.
 */
int principal (vide)
{
	test_isalpha('H');
	retourner (0);
}
