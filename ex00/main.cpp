/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:50:21 by afpachec          #+#    #+#             */
/*   Updated: 2025/02/06 10:55:22 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void) {
	Zombie	*jose;

	jose = newZombie("José");
	jose->announce();
	delete jose;
	jose = NULL;
	randomChump("Carlos");
}
