/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:32:06 by lboudjem          #+#    #+#             */
/*   Updated: 2024/05/28 13:33:50 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <vector>

int main()
{
    {    
        std::cout << "*-------------- MStack ------------*" << std::endl;
        MutantStack<int> mstack;
        
        mstack.push(5);
        mstack.push(17);

        std::cout << "Top: " << mstack.top() << std::endl;
        // mstack.pop();
        
        
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
    
        std::cout << "Size: " << mstack.size() << std::endl;
        
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }

    {
        std::cout << "*-------------- Vector ------------*" << std::endl;
        std::vector<int> lstack;
        
        lstack.push_back(5);
        lstack.push_back(17);
    
        std::cout << "Top: " << lstack.back() << std::endl;
        // lstack.pop_front();

        lstack.push_back(3);
        lstack.push_back(5);
        lstack.push_back(737);
        lstack.push_back(0);
        
        
        std::cout << "Size: "<< lstack.size() << std::endl;
 
        
        std::vector<int>::iterator it = lstack.begin();
        std::vector<int>::iterator ite = lstack.end();
        ++it;
        --it;
        
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }

    {
        std::cout << "*-------------- List ------------*" << std::endl;
        std::list<int> lstack;
        
        lstack.push_back(5);
        lstack.push_back(17);
    
        std::cout << "Top: " << lstack.back() << std::endl;
        // lstack.pop_front();

        lstack.push_back(3);
        lstack.push_back(5);
        lstack.push_back(737);
        lstack.push_back(0);
        
        
        std::cout << "Size: "<< lstack.size() << std::endl;
 
        
        std::list<int>::iterator it = lstack.begin();
        std::list<int>::iterator ite = lstack.end();
        ++it;
        --it;
        
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }
    return 0;
}
