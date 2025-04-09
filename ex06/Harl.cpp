/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 01:01:57 by afpachec          #+#    #+#             */
/*   Updated: 2025/04/09 01:40:56 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(std::string level): _level_number(get_level_number(level)) {}

int		Harl::get_level_number(std::string level) {
	return (level == "DEBUG" ? 0 : level == "INFO" ? 1 : level == "WARNING" ? 2 : level == "ERROR" ? 3 : -1);
}

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "Viva, viva, viva o Rei. Viva a Santa Religião. Viva, Lusos Valorosos, a Feliz Constituição!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {
	if (this->_level_number == -1) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	if (this->get_level_number(level) < this->_level_number)
		return ;
	switch (this->get_level_number(level)) {
		case 0:
			this->debug();
			break;
		case 1:
			this->info();
			break;
		case 2:
			this->warning();
			break;
		case 3:
			this->error();
			break;
		default:
			break;
	}
}
