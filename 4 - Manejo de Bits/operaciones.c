/*

	Tenemos las operaciones:

	- Not ( ~ ) -> Necesita un valor y cambia todos los 1 por 0 y viceversa
	- And ( & ) -> Necesita dos valores, funciona como && ambos valores necesitan ser 1 para devolver 1
	- Or  ( | ) -> Necesita dos valores, funciona como || uno de los dos tiene que ser 1 para devolver 1
	- Xor ( ^ ) -> Necesita dos valores, solo un valor necesita ser 1 para devolver 1
* 	
* 	Si solo tomamos 8 bits
*
* 	A 10111001 185
* 	B 00110100 52
*
* 	  00110000 A&B
* 	  10111101 A|B
* 	  10001101 A^B
*/

#include<stdio.h>

int main()
{
	unsigned char x = 100;

	printf("\nEl valor de  x > %u", x);                 // 1100100
	printf("\nEl valor de ~x > %u",(unsigned char) ~x); // 0011011
	
	printf("\n");
	return 0;
}
