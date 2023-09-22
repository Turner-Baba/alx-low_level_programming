#include "lists.h"
void ComeFirstbyTurner(void)__attribute__ ((constructor));
/**
 * ComeFirstbyTurner - function that runs before the main function
 */
void ComeFirstbyTurner(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
