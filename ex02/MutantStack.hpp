/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:35:10 by hikaru            #+#    #+#             */
/*   Updated: 2024/02/22 16:27:32 by hikaru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <deque>

template <class T, class Container = std::deque<T> >

class MutantStack : public std::stack<T, Container>
{
private:

public:
	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;

	MutantStack()
	{
	}
	~MutantStack()
	{
	}
	MutantStack(const MutantStack &rhs) : std::stack<T, Container>(rhs)
	{
	}
	MutantStack &operator=(const MutantStack &rhs)
	{
		if (this != &rhs)
			std::stack<T, Container>::operator=(rhs);
		return *this;
	}
	
	iterator begin() { return std::stack<T, Container>::c.begin(); }
	iterator end() { return std::stack<T, Container>::c.end();}
	const_iterator begin() const { return std::stack<T, Container>::c.begin(); }
	const_iterator end() const { return std::stack<T, Container>::c.end(); }
	reverse_iterator rbegin() { return std::stack<T, Container>::c.rbegin(); }
	reverse_iterator rend() { return std::stack<T, Container>::c.rend(); }
	const_reverse_iterator rbegin() const { return std::stack<T, Container>::c.rbegin(); }
	const_reverse_iterator rend() const { return std::stack<T, Container>::c.rend(); }
};
