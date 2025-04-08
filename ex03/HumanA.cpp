/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:07:52 by afpachec          #+#    #+#             */
/*   Updated: 2025/04/08 23:52:25 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon), _name(name) {}

void    HumanA::attack(void) {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
