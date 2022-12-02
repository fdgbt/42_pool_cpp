/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <fdagbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:56:01 by fdagbert          #+#    #+#             */
/*   Updated: 2021/09/03 15:56:04 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>

long double convInput(std::string input, long double value)
{
    try
    {
        value = std::stold(input);
    }
    catch (const std::exception &e)
    {
        if (input.at(0) >= 32 && input.at(0) <= 176)
        {
            if (input.length() != 1)
                throw(std::exception());
            else
            {
                value = static_cast<unsigned char>(input.at(0));
            }
        }
        else
            throw(std::exception());
    }
    return (value);
}

void convChar(long double value)
{
    std::cout << "char: ";
    try
    {
        if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min() || value != value)
            throw(std::exception());
        else if (std::isprint(static_cast<unsigned char>(value)))
            std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
}

void convInt(long double value)
{
    std::cout << "int: ";
    try
    {
        if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min() || value != value)
            throw(std::exception());
        else
            std::cout << static_cast<int>(value) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
}

void convFloat(long double value)
{
    std::cout << "float: ";
    try
    {
        std::cout << static_cast<float>(value) << "f" << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
}

void convDoubl(long double value)
{
    std::cout << "double: ";
    try
    {
        std::cout << static_cast<double>(value) << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "impossible" << std::endl;
    }
}

int main(int argc, char **argv)
{
    long double value = 0.0;

    if (argc != 2)
    {
        std::cout << "Error : Enter a value to convert !" << std::endl
                  << "Usage: ./convert 42" << std::endl;
        return (-1);
    }
    else
        std::cout << std::setprecision(1) << std::fixed;

    try
    {
        value = convInput(argv[1], 0.0);
    }
    catch (const std::exception &e)
    {
        std::cout << "Error : This is not a litteral value !" << std::endl
                  << "Examples of litteral value: a | -42 | 4.2f | -4.2" << std::endl;
        return (-2);
    }

    convChar(value);
    convInt(value);
    convFloat(value);
    convDoubl(value);

    return (0);
}
