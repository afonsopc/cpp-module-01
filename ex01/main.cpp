/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 10:50:21 by afpachec          #+#    #+#             */
/*   Updated: 2025/02/06 11:20:23 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name );

int	main(void) {
	Zombie	*zombies;
	int		zombies_amount;

	zombies_amount = 3;
	zombies = zombieHorde(zombies_amount, "Manuel");
	while (zombies_amount--)
		zombies[zombies_amount].announce();
	delete[] zombies;
}
