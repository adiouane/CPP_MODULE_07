/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 01:00:33 by adiouane          #+#    #+#             */
/*   Updated: 2023/01/11 18:16:18 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    std::string array[5] = {"Hello", "World", "!", "I", "am"};
    int array2[5] = {1, 2, 3, 4, 5};
    char array3[5] = {'a', 'b', 'c', 'd', 'e'};
    float array4[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    bool array5[5] = {true, false, true, false, true};

    //implicit template instantiation
    iter(array, 5, everyelement);
    std::cout << "-------------" << std::endl;
    iter(array2, 5, everyelement);
    std::cout << "-------------" << std::endl;
    iter(array3, 5, everyelement);
    std::cout << "-------------" << std::endl;
    iter(array4, 5, everyelement);
    std::cout << "-------------" << std::endl;
    iter(array5, 5, everyelement);
    std::cout << "-------------" << std::endl;

    //explicit template instantiation
    iter<std::string>(array, 5, everyelement);
    std::cout << "-------------" << std::endl;
    iter<int>(array2, 5, everyelement);
    std::cout << "-------------" << std::endl;
    iter<char>(array3, 5, everyelement);
    std::cout << "-------------" << std::endl;
    iter<float>(array4, 5, everyelement);
    std::cout << "-------------" << std::endl;
    iter<bool>(array5, 5, everyelement);
    return (0);
}
