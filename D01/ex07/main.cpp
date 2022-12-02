/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 02:04:27 by fdagbert          #+#    #+#             */
/*   Updated: 2021/04/22 17:10:47 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

static void			ft_upper_file(std::string *replaceName, const std::string fileName)
{
	int				len = 0;
	int				i = 0;

	len = fileName.length();
	while (i < len && fileName[i] != '.')
	{
		if (fileName[i] >= 97 && fileName[i] <= 122)
			replaceName->at(i) = fileName[i] - 32;
		else
			replaceName->at(i) = fileName[i];
		i++;
	}
	replaceName->replace(i, 9, ".replace\0");
}

static int			ft_replace_file(const std::string search, const std::string replace, const std::string fileName, const std::string replaceFile)
{
	size_t			pos = 0;
	size_t			s_len = search.length();
	std::string		line = "";
	std::ofstream	ofs(replaceFile);
	std::ifstream	ifs(fileName);

	if (ofs.is_open())
	{
		if (ifs.is_open())
		{
			while (ifs.good() && std::getline(ifs, line))
			{
				pos = line.find(search);
				while (pos != std::string::npos && pos < line.length())
				{
					line.replace(pos, s_len, replace);
					pos = line.find(search, pos);
				}
				ofs << line << std::endl;
			}
		}
		else
		{
			std::cout << "Error: Failed to open the original file !\n";
			return (-3);
		}
	}
	else
	{
		std::cout << "Error: Failed to open the replace file !\n";
		return (-4);
	}
	return (0);
}

static int			ft_start_file(char **argv)
{
	int					ret = 0;
	const std::string	fileName = argv[1];
	const std::string	search = argv[2];
	const std::string	replace = argv[3];
	std::string			replaceFile = argv[1];

	ft_upper_file(&replaceFile, fileName);
	if ((ret = ft_replace_file(search, replace, fileName, replaceFile)) < 0)
		return (ret);
	return (0);
}

int					main(int argc, char **argv)
{
	int				ret = 0;

	if (argc != 4)
	{
		std::cout << "usage: ./replace [fileName] [S1] [S2]\n";
		std::cout << "S1: search - S2: replace\n";
		return (-1);
	}
	if (!argv[1] || !argv[1][0] || !argv[2] || !argv[2][0] || !argv[3] || !argv[3][0])
	{
		std::cout << "Error: Arguments can not be empty !\n";
		return (-2);
	}

	if ((ret = ft_start_file(argv)) < 0)
		return (ret);
	return (0);
}
