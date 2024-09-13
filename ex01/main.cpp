/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:08:23 by mgayout           #+#    #+#             */
/*   Updated: 2024/09/10 16:08:23 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	char	array1[] = {'a', 'A', '1'};
	int		array2[] = { 1, -42, 42};
	size_t	n = 3;

	std::cout << "char array :" << std::endl;
	for (size_t i = 0; i != n; i++)
		std::cout << i << " = " << array1[i] << std::endl;
	std::cout << std::endl;
	std::cout << "int array :" << std::endl;
	for (size_t i = 0; i != n; i++)
		std::cout << i << " = " << array2[i] << std::endl;
	std::cout << std::endl;

	std::cout << "iter on array1." << std::endl;
	iter(array1, 3, test);
	std::cout << "iter on array2." << std::endl;
	iter(array2, 3, test);
	std::cout << std::endl;

	std::cout << "char array :" << std::endl;
	for (size_t i = 0; i != n; i++)
		std::cout << i << " = " << array1[i] << std::endl;
	std::cout << std::endl;
	std::cout << "int array :" << std::endl;
	for (size_t i = 0; i != n; i++)
		std::cout << i << " = " << array2[i] << std::endl;

	return 0;
}

/*int	main(void)
{
	char	array[] = {'a', 'A', '1'};

	iter(array, 4, test);

	return 0;
}*/
