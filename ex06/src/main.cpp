/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 13:11:03 by pipe              #+#    #+#             */
/*   Updated: 2024/12/04 13:33:15 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage : " << argv[0] << "<level>" << std::endl;
        return (-1);
    }
    Harl harl;
    
    harl.complainFilter(argv[1]);

    return (0);
}