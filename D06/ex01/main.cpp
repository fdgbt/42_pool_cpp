/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:56:15 by fdagbert          #+#    #+#             */
/*   Updated: 2021/09/03 18:04:32 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

struct Data {
	std::string		lastName;
	std::string		firstName;
	int				age;
};

uintptr_t			serialize(Data *ptr)
{
	uintptr_t		ret = 0;
	try
	{
		ret = reinterpret_cast<uintptr_t>(ptr);
	}
	catch (const std::exception &e)
	{
		std::cout << "Error : Failed to deserialize raw data !" << std::endl;
		return (0);
	}

	std::cout << "- ptr address -" << std::endl << ptr << std::endl;

	return (ret);
}

Data				*deserialize(uintptr_t raw)
{
	Data		*ret = NULL;
	try
	{
		ret = reinterpret_cast<Data*>(raw);
	}
	catch (const std::exception &e)
	{
		std::cout << "Error : Failed to deserialize raw data !" << std::endl;
		return (NULL);
	}

	return (ret);
}

int main(void)
{

	Data			*client = new Data;

	client->lastName = "Sadirac";
	client->firstName = "Nicolas";
	client->age = 53;

	uintptr_t		encrypted = 0;
	Data			*decrypted = NULL;

	encrypted = serialize(client);
	decrypted = deserialize(encrypted);

	std::cout << "- Encrypted Data -" << std::endl << encrypted << std::endl;

	if (decrypted)
	{
		std::cout << "- Decrypted data -" << std::endl << "ptr: " << decrypted
			<< std::endl << "Last Name: " << decrypted->lastName << std::endl
			<< "First Name: " << decrypted->firstName << std::endl << "Age: "
			<< decrypted->age << std::endl;
	}

	delete client;
	return (0);
}
