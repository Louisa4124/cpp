/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:18:31 by lboudjem          #+#    #+#             */
/*   Updated: 2023/09/21 13:12:45 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	ft_replace(std::ifstream &ifs, std::ofstream& ofs, const std::string s1, const std::string s2)
{
	std::string	line;
	std::size_t	i;

	while (std::getline(ifs, line))
	{
		i = 0;
		while (1)
		{
			i = line.find(s1, i);
			if (i == std::string::npos)
				break ;
			line.erase(i, s1.size());
			line.insert(i, s2);
			i += s2.length();
		}
		ofs << line << std::endl;
	}
}

int main(int argc, char **argv)
{
	std::string arg2 = argv[2];
	std::string arg3 = argv[3];
	
	if (argc != 4)
	{
		std::cout << "How to use: ./ex04 <filename> <find> <replace>" << std::endl;
		return (1);
	}
	
	if (arg2.length() == 0 || arg3.length() == 0)
	{
		std::cout << "Invalid character" << std::endl;
		return (1);
	}
	
	std::string filename = argv[1];
	std::string	replace = (filename + ".replace");
	std::ifstream ifs;
	
	ifs.open(argv[1]);
	if (ifs.fail())
		std::cout << "Could not find file" << std::endl;

	std::ofstream ofs(replace.c_str(), std::ios::out | std::ios::trunc);
	if (ofs.fail())
		std::cout << "Could not find file" << std::endl;

		
	ft_replace(ifs, ofs, argv[2], argv[3]);
	return (0);
}
