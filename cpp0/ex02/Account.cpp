/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudjem <lboudjem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:24:45 by lboudjem          #+#    #+#             */
/*   Updated: 2023/08/19 14:35:39 by lboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Account::Account()
{
	return;
}

Account::~Account()
{
	return;
}

static int Account::getNbAccounts() const
{
	return (this->_nbAccounts);
}

static int Account::getTotalAmount() const
{
	return (this->_totalAmount);
}

static int Account::getNbDeposits() const
{
	return (this->_nbDeposits);
}

static int Account::getNbWithdrawals() const
{
	return (this->_nbAccounts);
}
