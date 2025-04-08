/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 22:58:05 by afpachec          #+#    #+#             */
/*   Updated: 2025/04/08 23:41:33 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {
    private:
        Weapon      *_weapon;
        std::string _name;
    public:
        HumanB(std::string name);
        void    setWeapon(Weapon &weapon);
        void    attack(void);
};

#endif