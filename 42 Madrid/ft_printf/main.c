#include "ft_printf.h"
#include <stdio.h> // Para comparar con printf original

int	main(void)
{
	int		num;
	char	*str;
	void	*ptr;

	num = 88;
	str = "Pepe el puerco";
	ptr = &num;

	ft_printf("===== PRUEBAS DE ft_printf =====\n");

	// Prueba de caracteres
	ft_printf("\n🟢 Prueba de %%c:\n");
	ft_printf("Mi printf: [%c] [%c]\n", 'A', 'Z');
	printf("Original : [%c] [%c]\n", 'A', 'Z');

	// Prueba de cadenas
	ft_printf("\n🟢 Prueba de %%s:\n");
	ft_printf("Mi printf: [%s]\n", str);
	printf("Original : [%s]\n", str);

	// Prueba de enteros con signo (%d y %i)
	ft_printf("\n🟢 Prueba de %%d y %%i:\n");
	ft_printf("Mi printf: [%d] [%i] [%d]\n", num, -num, 2147483647);
	printf("Original : [%d] [%i] [%d]\n", num, -num, 2147483647);

	// Prueba de enteros sin signo (%u)
	ft_printf("\n🟢 Prueba de %%u:\n");
	ft_printf("Mi printf: [%u] [%u]\n", 429496729, 0);
	printf("Original : [%u] [%u]\n", 9496729, 0);

	// Prueba de hexadecimal en minúsculas (%x)
	ft_printf("\n🟢 Prueba de %%x:\n");
	ft_printf("Mi printf: [%x] [%x]\n", 255, 4096);
	printf("Original : [%x] [%x]\n", 255, 4096);

	// Prueba de hexadecimal en mayúsculas (%X)
	ft_printf("\n🟢 Prueba de %%X:\n");
	ft_printf("Mi printf: [%X] [%X]\n", 255, 4096);
	printf("Original : [%X] [%X]\n", 255, 4096);

	// Prueba de punteros (%p)
	ft_printf("\n🟢 Prueba de %%p:\n");
	ft_printf("Mi printf: [%p]\n", ptr);
	printf("Original : [%p]\n", ptr);

	// Prueba de porcentaje %%
	ft_printf("\n🟢 Prueba de %%:\n");
	ft_printf("Mi printf: [%%]\n");
	printf("Original : [%%]\n");

	ft_printf("\n✅ Pruebas finalizadas con éxito!\n");

	return (0);
}
