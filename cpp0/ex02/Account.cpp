/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:24:45 by lboudjem          #+#    #+#             */
/*   Updated: 2023/08/21 12:37:45 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_nbAccounts++;
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	return;
}

Account::~Account( void )
{
	_nbAccounts--;
	return;
}

void	Account::_displayTimestamp(void)
{
	std::time_t time;
	char 		str[100];

	std::time(&time);
	std::strftime(str, 100, "[%Y%m%d_%H%M%S] ", std::localtime(&time));
	std::cout << str;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}


void	Account::displayAccountsInfos(void)
{
	
}

void	Account::makeDeposit(int deposit)
{
	
}

bool	Account::makeWithdrawal(int withdrawal)
{
	
}


int		Account::checkAmount(void) const
{
	
}

void	Account::displayStatus(void) const
{
	
}