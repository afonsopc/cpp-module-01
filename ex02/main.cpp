/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:08:08 by afpachec          #+#    #+#             */
/*   Updated: 2025/02/06 12:12:02 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void) {
	std::string	hi = "HI THIS IS BRAIN";
	std::string	*hi_ptr = &hi;
	std::string	&hi_ref = hi;

	std::cout << &hi << std::endl;
	std::cout << hi_ptr << std::endl;
	std::cout << &hi_ref << std::endl;
	std::cout << hi << std::endl;
	std::cout << *hi_ptr << std::endl;
	std::cout << hi_ref << std::endl;
}
