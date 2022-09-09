/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:41:51 by bkiziler          #+#    #+#             */
/*   Updated: 2022/09/09 12:53:45 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char	*dest, char	*src)
{
	unsigned int	i;
	unsigned int j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
