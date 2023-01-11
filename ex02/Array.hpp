/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 01:00:37 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/11 18:10:06 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
    private:
        T *_array;
        unsigned int _size;
    public:
        Array(void) : _array(new T[0]), _size(0) {}
        Array(unsigned int n) : _array(new T[n]), _size(n) {}
        Array(Array const &src) : _array(new T[src._size]), _size(src._size)
        {
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = src._array[i];
        }
        ~Array(void)
        {
            delete [] _array;
        }
        Array &operator=(Array const &rhs)
        {
            if (this != &rhs)
            {
                delete [] _array;
                _array = new T[rhs._size];
                _size = rhs._size;
                for (unsigned int i = 0; i < _size; i++)
                    _array[i] = rhs._array[i]; 
            }
            return (*this);
        }
        T &operator[](unsigned int i)
        {
            if (i >= _size)
                throw std::exception();
            return (_array[i]);
        }
        unsigned int size(void) const
        {
            return (_size);
        }
};

#endif