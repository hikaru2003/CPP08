/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:05:34 by hikaru            #+#    #+#             */
/*   Updated: 2024/02/22 16:25:53 by hikaru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int max)
{
	_vector.reserve(max);
}

Span::Span(const Span &rhs)
{
	*this = rhs;
}

Span &Span::operator=(const Span &rhs)
{
	if (this != &rhs)
		_vector = rhs._vector;
	return *this;
}

Span::~Span()
{
}

void	Span::addNumber(int n)
{
	if (_vector.size() == _vector.capacity())
		throw Span::FullElementsException();
	_vector.push_back(n);
}

int	Span::shortestSpan()
{
	int	span = 0;
	if (_vector.size() < 2)
		throw Span::NotEnoughElementsException();
	sort(_vector.begin(), _vector.end());
	span = _vector[1] - _vector[0];
	for (size_t i = 1; i < _vector.size(); i++)
	{
		if (_vector[i] - _vector[i - 1] < span)
			span = _vector[i] - _vector[i - 1];
	}
	return span;
}

int	Span::longestSpan()
{
	if (_vector.size() < 2)
		throw Span::NotEnoughElementsException();
	sort(_vector.begin(), _vector.end());
	return (_vector.back() - _vector.front());
}

void	Span::getVector() const
{
	for (size_t i = 0; i < _vector.size(); i++)
	{
		std::cout << _vector[i] << " ";
	}
	std::cout << std::endl;
}

void	Span::setVector(unsigned int n)
{
	srand(time(NULL));
	if ((_vector.size() + n) > _vector.capacity())
		throw Span::FullElementsException();
	for (size_t i  = 0; i < n; i++)
	{
		_vector.push_back(rand() % 1000);
	}
}