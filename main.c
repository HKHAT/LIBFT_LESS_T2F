#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int	main()
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
 	char buff1[0xF00] = "there is no stars in the sky";
 	char buff2[0xF00] = "there is no stars in the sky";
 	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + strlen("there is no stars in the sky");
	ft_memcpy(buff1,buff2,max);
	printf("%s\n",buff1);
}
