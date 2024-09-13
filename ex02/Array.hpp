/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:31:42 by mgayout           #+#    #+#             */
/*   Updated: 2024/09/12 13:31:42 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class	Array
{
	public:
			Array();
			Array(unsigned int	size);
			Array(const Array& other);
			Array&	operator=(const Array& other);
			T&		operator[](unsigned int index);
			~Array();

			unsigned int	size();

			class	InvalidIndexException : public std::exception
			{
				public:
						virtual const char *what() const throw();
			};

	private:
			T				*array_;
			unsigned int	size_;
};

# include "Array.tpp"

#endif