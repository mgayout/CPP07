/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:56:22 by mgayout           #+#    #+#             */
/*   Updated: 2024/09/10 15:56:22 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_HPP
# define FUNC_HPP

# include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(T &a, T &b)
{
	if (a < b)
		return a;
	else
		return b;
}

template<typename T>
T	max(T &a, T &b)
{
	if (a > b)
		return a;
	else
		return b;
}

#endif