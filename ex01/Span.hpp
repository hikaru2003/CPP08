/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:14:47 by hikaru            #+#    #+#             */
/*   Updated: 2024/02/22 16:27:24 by hikaru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	std::vector<int>	_vector;
public:
	Span(unsigned int max);
	Span(const Span &rhs);
	Span &operator=(const Span &rhs);
	~Span();
	
	void	addNumber(int n);
	int		shortestSpan();
	int		longestSpan();
	void	getVector() const;
	void	setVector(unsigned int n);

	class FullElementsException : public std::exception
	{
		virtual const char *what() const throw() { return "Error: The vector is full"; };
	};
	class NotEnoughElementsException : public std::exception
	{
		virtual const char *what() const throw() { return "Error: Not enough elements"; };
	};
};
