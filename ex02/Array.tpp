/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgayout <mgayout@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:42:36 by mgayout           #+#    #+#             */
/*   Updated: 2024/09/12 13:42:36 by mgayout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() : size_(0)
{
	this->array_ = new T[this->size_];
}

template<typename T>
Array<T>::Array(unsigned int size) : size_(size)
{
	this->array_ = new T[this->size_];
}

template<typename T>
Array<T>::Array(const Array& other) : size_(other.size_)
{
	this->array_ = NULL;
	*this = other;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this->array_)
		delete [] this->array_;
	this->size_ = other.size_;
	this->array_ = new T[this->size_];
	for (size_t i = 0; i != this->size_; i++)
		if (other.array_[i])
			this->array_[i] = other.array_[i];
	return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= this->size_)
		throw(Array<T>::InvalidIndexException());
	return this->array_[index];
}

template<typename T>
Array<T>::~Array()
{
	if (this->array_)
		delete [] this->array_;
}

template<typename T>
unsigned int	Array<T>::size()
{
	return static_cast<unsigned int>(this->size_);
}


template<typename T>
const char	*Array<T>::InvalidIndexException::what() const throw()
{
	return ("Error: Invalid index");
}
