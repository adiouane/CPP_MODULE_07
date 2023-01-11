/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 01:00:37 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/11 18:17:15 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void everyelement(T &element)
{
    std::cout << "< " << element << " >" << std::endl;
}

template<typename T>
void iter(T *array, size_t length, void (*func)(T &l))
{
    for (size_t i = 0; i < length; i++)
        func(array[i]);
}

#endif