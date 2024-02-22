/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hikaru <hikaru@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 14:31:21 by hikaru            #+#    #+#             */
/*   Updated: 2024/02/18 18:30:52 by hikaru           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(int argc, char **argv)
{
	if ( argc != 2 )
        return EXIT_FAILURE;

    int                 arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::vector< int >      vector( arr, arr + sizeof( arr ) / sizeof( int ) );
    std::list< int >        list( arr, arr + sizeof( arr ) / sizeof( int ) );

    try
	{
		easyfind( vector, std::atoi( argv[1] ));
		easyfind( list, std::atoi( argv[1] ));
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    return EXIT_SUCCESS;
}