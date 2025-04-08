/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:07:52 by afpachec          #+#    #+#             */
/*   Updated: 2025/04/08 23:55:08 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(nullptr), _name(name) {}

void    HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
}

void    HumanB::attack(void) {
    std::string type = this->_weapon ? this->_weapon->getType() : "";

    std::cout << this->_name << " attacks with their " << type << std::endl;
}
