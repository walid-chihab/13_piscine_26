#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

/*min maj
*    void	ft_print_alphabet(void){
*       char c;
*       c =  'a';
*       char z ;
*       printf ("\n");
*       while (c <= 'z'){
*           write(1,&c,1);
*           z=toupper(c);
*           write(1,&z,1);
*           c++;
*       }
*       printf ("\n");
*    }
*/
void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <='z'){
		write (1,&c,1);
		c++;
	}
}