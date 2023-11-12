/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elchakir <elchakir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:29:55 by elchakir          #+#    #+#             */
/*   Updated: 2023/11/12 22:54:38 by elchakir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	unsigned int	i;
	i = 0;
	if(!s)
	{
		return;
	}
	while(s[i])
	{
		f(i,&s[i]);
		i++;
	}
}

// int	main()
// { 
// 	ft_striteri("mehdi\n",&ft_putstr);
// }
