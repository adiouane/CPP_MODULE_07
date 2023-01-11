/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 01:00:33 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/11 18:23:17 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    Array<int> array(5);
    Array<std::string> array2(5);

    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;

    array2[0] = "AMINE";
    array2[1] = "DIOUANE";
    array2[2] = "1337";
    array2[3] = "FUTURE";
    array2[4] = "IS LOIDING";

    for (size_t i = 0; i < array.size(); i++)
        std::cout << array[i] << std::endl;
    for (size_t i = 0; i < array2.size(); i++)
        std::cout << array2[i] << std::endl;
    return (0);
}

