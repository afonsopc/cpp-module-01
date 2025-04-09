/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 00:59:58 by afpachec          #+#    #+#             */
/*   Updated: 2025/04/09 01:36:19 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
	private:
		int			_level_number;
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
		int			get_level_number(std::string level);
	public:
		Harl(std::string level);
		void	complain(std::string level);
};

#endif