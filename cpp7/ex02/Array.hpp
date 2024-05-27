/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:03:26 by lboudjem          #+#    #+#             */
/*   Updated: 2024/05/27 15:23:20 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>

template <typename T>
class Array {
    private:
		unsigned int	_size;
		T 				*_array;

    public:
        Array(): _size(0), _array(new T[0]){
            std::cout << "Constructor Array" << std::endl;
        };
        ~Array(){
            _size = 0;
            if (!this->_size)
                delete(_array);
            else
                delete [] (_array);
            std::cout << "Destructor Array" << std::endl;
        };
        Array(unsigned int n) : _size(n){
            if (_size > 0)
                _array = new T[_size];
            else{
                _size = 0;
                _array = new T[0];
            }
            std::cout << "Constructor int Array" << std::endl;
        };
        Array(Array<T> &cpy){
            _size = cpy._size;
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; ++i)
                _array[i] = cpy._array[i];
            std::cout << "Constructor by copy Array" << std::endl;
        };
        
        Array<T> &operator=(Array<T> &cpy){
             _size = cpy._size;
            delete[] _array;
            _array = new T[_size];
            for(unsigned int i = 0; i < _size; i++)
                _array[i] = cpy._array[i];
            return (*this);
            std::cout << "Operator = Array" << std::endl;
        };
        
        T &operator[](unsigned int i){
            if (i >= _size)
                throw std::out_of_range("Wrong Index Value");
            return (_array[i]);
            std::cout << "Constructor [] Array" << std::endl;
        };

		unsigned int size() const{
            return (_size);
        };
};

#endif