/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:59:43 by afpachec          #+#    #+#             */
/*   Updated: 2025/04/09 00:54:47 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string	read_file(std::ifstream &file) {
	std::stringstream	buff;
	buff << file.rdbuf();
	return buff.str();
}

std::string	replace_instances(std::string master, std::string to_replace, std::string replace_with) {
	std::string				replaced;

	for (std::string::iterator	it = master.begin(); it != master.end(); ++it) {
		if (size_t(master.end() - it) >= to_replace.length() && master.substr(size_t(it - master.begin()), to_replace.length()) == to_replace) {
			replaced += replace_with;
			it += to_replace.length() - 1;
		}
		else
			replaced += *it;
	}
	return (replaced);
}

void	write_to_file(std::string file_name, std::string contents) {
	std::ofstream	file(file_name.c_str());
	if (file.is_open())
		file << contents;
}

int	main(int argc, char **argv) {
	if (argc != 4)
	{
		std::cout << "Invalid arguments (better yourself loser)" << std::endl;
		return (1);	
	}
	std::ifstream	file(argv[1]);
	if (!file.is_open())
	{
		std::cout << "File not found" << std::endl;
		return (1);
	}
	std::string contents = read_file(file);
	std::string	replaced_contents = replace_instances(contents, std::string(argv[2]), std::string(argv[3]));
	write_to_file(std::string(argv[1]) + ".replace", replaced_contents);
}
