/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbonilla <dbonilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 10:12:44 by dbonilla          #+#    #+#             */
/*   Updated: 2024/12/02 10:21:03 by dbonilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;

    std::string &stringREF = str;

    std::cout << "Address of variable" << &str << std::endl;
    std::cout << "Address set in StringPtr" << stringPTR << std::endl;
    std::cout << "Address of StringRef" << &stringREF << std::endl;
    
    std::cout << "Value of variable" << str << std::endl;
    std::cout << "value of StringPtr" << *stringPTR << std::endl;
    std::cout << "value of StringRef" << stringREF << std::endl;

    return (0);
}