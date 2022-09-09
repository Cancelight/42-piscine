/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:49:23 by bkiziler          #+#    #+#             */
/*   Updated: 2022/09/08 15:49:25 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			if (j == 1)
				str[i] -= 32;
			j = 0;
		}
		else if ((str[i] >= '0') && (str[i] <= '9'))
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}
