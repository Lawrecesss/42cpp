/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lshein <lshein@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 02:29:54 by lshein            #+#    #+#             */
/*   Updated: 2025/03/11 02:33:27 by lshein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			std::cout << ft_toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
