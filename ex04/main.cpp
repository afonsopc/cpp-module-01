/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afpachec <afpachec@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:59:43 by afpachec          #+#    #+#             */
/*   Updated: 2025/04/09 00:35:28 by afpachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fcntl.h>
#include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1024
#endif

std::string	read_file(int fd) {
	char	buff[BUFFER_SIZE + 1] = {0};
	std::string	contents;
	ssize_t	read_bytes;

	read_bytes = read(fd, buff, BUFFER_SIZE);
	while (read_bytes > 0)
	{
		buff[read_bytes] = '\0';
		contents += buff;
		read_bytes = read(fd, buff, BUFFER_SIZE);
	}
	return (contents);
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
	int		fd = open(file_name.c_str(), O_WRONLY | O_CREAT | O_TRUNC, 0644);
	write(fd, contents.c_str(), contents.length());
	close(fd);
}

int	main(int argc, char **argv) {
	if (argc != 4)
	{
		std::cout << "Invalid arguments (better yourself loser)" << std::endl;
		return (1);	
	}
	int	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		std::cout << "File not found" << std::endl;
		return (1);
	}
	std::string contents = read_file(fd);
	close(fd);
	std::string	replaced_contents = replace_instances(contents, std::string(argv[2]), std::string(argv[3]));
	write_to_file(std::string(argv[1]) + ".replace", replaced_contents);
}
