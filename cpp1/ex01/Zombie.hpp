/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:16:51 by lboudjem          #+#    #+#             */
/*   Updated: 2023/08/23 14:22:37 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
        std::string name;
    
    public:
        Zombie();
        ~Zombie();
        
        std::string get_name(void) const;
        
        void        set_name(std::string name);
        
        void        announce(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif