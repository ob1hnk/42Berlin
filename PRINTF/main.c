#include <stdio.h>
#include <limits.h>
#include "printf.h"

int	main()
{
	int	len;
	int	testlen;
	len = ft_printf("MINE: Hello %s, how are %c? %i %% out of %u? Upper-hexa: %X Lower-Hexa: %x\n %p\n",
	"Natalie", 'u', 100, 4294967295U, 4294967295U, 4294967295U, "Hey");
	testlen = printf("TEST: Hello %s, how are %c? %i %% out of %u? Upper-hexa: %X Lower-Hexa: %x\n %p\n",
	"Natalie", 'u', 100, 4294967295U, 4294967295U, 4294967295U, "Hey");
	ft_printf("Length: %d\n", len);
	printf("Length: %d\n", testlen);
	ft_printf(NULL);
	printf(NULL);
	ft_printf("Length: %d\n", len);
	printf("Length: %d\n", testlen);
	//ft_printf("%p %p %p\n", 0, LONG_MAX, -1);
	//printf("%p %p %p\n", 0, LONG_MAX, -1);
	//ft_printf("MINE: Hello there\n");
	//printf("TEST: Hello there\n");
	//printf("\n\n\nHello %s %d\n");
	//ft_printf("\n\n\nHello %s %d\n");
}
// #include "ft_printf.h"
// int	main(void)
// {
// 	int	a,b,c,d,e,f,g,h,i,j,k,l,m,n;
// 	int	*ptr = &a;
// 	char *ptr2 = "Hi";
// 	void *ptr3 = NULL;
// //no flags:
// 	a = ft_printf("HI\n");
// 	b = printf("HI\n");
// 	printf("mine: %d, built-in: %d\n\n", a, b);
// //charecters: (c)
// 	c = ft_printf("%c\n", 'K');
// 	d = printf("%c\n", 'K');
// 	printf("mine: %d, built-in: %d\n\n", c, d);
// //strings: (s)
// 	e = ft_printf("Hi %s %s\n", "there.", "");
// 	f = printf("Hi %s %s\n", "there.", "");
// 	printf("mine: %d, built-in: %d\n\n", e, f);
// //pointers: (p)
// 	g = ft_printf("%p, %p, %p, %p, %p\n", ptr, ptr2, ptr3, 0, NULL);
// 	h = printf("%p, %p, %p, %p, %p\n", ptr, ptr2, ptr3, 0, NULL);
// 	printf("mine: %d, built-in: %d\n\n", g, h);
// //numbers: (d, i, u, x, X)
// 	i = ft_printf("nbrs: %d, %i, %u, %x, %X\n", 43, -2147483648, -500, 250, 250);
// 	j = printf("nbrs: %d, %i, %u, %x, %X\n", 43, -2147483648, -500, 250, 250);
// 	printf("mine: %d, built-in: %i\n\n", i, j);
// //precentages: (%)
// 	k = ft_printf("%%\n");
// 	l = printf("%%\n");
// 	printf("mine: %d, built-in: %d\n\n", k, l);
// //special_cases:
// 	m = ft_printf(0);
// 	n = printf(0);
// 	printf("mine: %d, built-in: %d\n", m, n);
// }