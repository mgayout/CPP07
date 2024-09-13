/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:21:01 by mgayout           #+#    #+#             */
/*   Updated: 2024/09/10 16:21:01 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template<typename T>
void	iter(T *array, size_t n, void (*func)(T&))
{
	if (!array || !n)
		return ;
	for (size_t i = 0; i != n; i++)
		if (!array[i])
		{
			std::cout << "Wrong size of array." << std::endl;
			return;
		}
	for (size_t i = 0; i != n; i++)
		func(array[i]);
}

template<typename T>
void	test(T& string)
{
	string = static_cast<char>(string) + 1;
}

#endif