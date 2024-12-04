/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipe <pipe@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:21:39 by pipe              #+#    #+#             */
/*   Updated: 2024/12/04 13:36:28 by pipe             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string.h>
#include <iostream>

class Harl
{
    private:
        void debug();
        void info();
        void warning();
        void error();
        

        int getLevelIndex(const std::string &leve)const;
        std::string toLower(const std::string &str) const;
        struct Complaint
        {
            std::string level;
            void (Harl:: *method)();
        };
        
    
    public:
        void complainFilter(const std::string &level);
    
};

#endif