/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omiroshn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/26 21:05:38 by omiroshn          #+#    #+#             */
/*   Updated: 2018/03/26 21:05:40 by omiroshn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int		Account::checkAmount(void) const {
	_countCheckAmount++;
	return (_amount);
}

int		Account::getNbAccounts(void) {
	return(Account::_nbAccounts);
}

int		Account::getTotalAmount(void) {
	return(Account::_totalAmount);
}

int		Account::getNbDeposits(void) {
	return(Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals(void) {
	return(Account::_totalNbWithdrawals);
}

void	showTime() {
	time_t		rawtime;
	struct tm	*timeinfo;
	char		buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "[%Y%m%d_%H%M%S] ", timeinfo);
	std::cout << buffer;
}

Account::Account() :
	_accountIndex(0), _amount(0),
	_nbDeposits(0), _nbWithdrawals(0), _countCheckAmount(0) {
	this->_accountIndex = _nbAccounts;
	_totalAmount += _amount;
	_nbAccounts++;
	showTime();
	std::cout << "index:";
	std::cout << this->_accountIndex;
	std::cout << ";amount:";
	std::cout << checkAmount();
	std::cout << ";created " << std::endl;
}

Account::Account(int initial_deposit) :
	_accountIndex(0), _amount(initial_deposit),
	_nbDeposits(0), _nbWithdrawals(0) {
	this->_accountIndex = _nbAccounts;
	_totalAmount += _amount;
	_nbAccounts++;
	showTime();
	std::cout << "index:";
	std::cout << this->_accountIndex;
	std::cout << ";amount:";
	std::cout << checkAmount();
	std::cout << ";created " << std::endl;
}

Account::~Account() {
	showTime();
	std::cout << "index:";
	std::cout << this->_accountIndex;
	std::cout << ";amount:";
	std::cout << checkAmount();
	std::cout << ";closed " << std::endl;
}

void	Account::displayAccountsInfos() {
	showTime();
	std::cout << "accounts:";
	std::cout << Account::getNbAccounts();
	std::cout << ";total:";
	std::cout << Account::getTotalAmount();
	std::cout << ";deposits:";
	std::cout << Account::getNbDeposits();
	std::cout << ";withdrawals:";
	std::cout << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const {

	showTime();
	std::cout << "index:";
	std::cout << this->_accountIndex;
	std::cout << ";amount:";
	std::cout << checkAmount();
	std::cout << ";deposits:";
	std::cout << this->_nbDeposits;
	std::cout << ";withdrawals:";
	std::cout << this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) {
	int temp_amount = this->_amount;
	this->_amount += deposit;
	if (this->_accountIndex == 0)
		_totalAmount = 0;
	_totalAmount += this->_amount;
	_nbDeposits = 1;
	_totalNbDeposits++;
	showTime();
	std::cout << "index:";
	std::cout << this->_accountIndex;
	std::cout << ";p_amount:";
	std::cout << temp_amount;
	std::cout << ";deposit:";
	std::cout << deposit;
	std::cout << ";amount:";
	std::cout << checkAmount();
	std::cout << ";nb_deposits:";
	std::cout << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	int temp_amount = this->_amount;
	if (this->_accountIndex == 0)
		_totalAmount = 0;
	showTime();
	std::cout << "index:";
	std::cout << this->_accountIndex;
	std::cout << ";p_amount:";
	std::cout << temp_amount;
	std::cout << ";withdrawal:";
	if (checkAmount() > withdrawal) {
		this->_nbWithdrawals = 1;
		this->_amount -= withdrawal;
		std::cout << withdrawal;
		std::cout << ";amount:";
		std::cout << checkAmount();
		std::cout << ";nb_withdrawals:";
		std::cout << this->_nbWithdrawals << std::endl;
		_totalAmount += this->_amount;
		_totalNbWithdrawals++;
	}
	else {
		_totalAmount += temp_amount;
		std::cout << "refused" << std::endl;
	}
	return (true);
}
