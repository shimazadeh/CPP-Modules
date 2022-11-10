#include "Account.hpp"
#include <iostream>
#include <string>
#include <chrono>

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account:: Account(int	initial_deposit)
{
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = Account::_nbAccounts;

	Account::_nbAccounts++;
	Account::_totalAmount += this->checkAmount();

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" <<std::endl;

	return ;
}

Account::~Account(void){

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" <<std::endl;

	Account::_nbAccounts--;
	Account::_totalAmount -= this->checkAmount();
	return ;
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbDeposits);
}

void	Account::displayAccountsInfos(void){

	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit){

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ";";
	if (deposit < 0)
	{
		std::cout << "rejected" << std::endl;
		return ;
	}
	else
	{
		this->_nbDeposits++;
		this->_amount += deposit;
		Account::_totalAmount += deposit;
		Account::_totalNbDeposits++;
		std::cout << "deposit:" << deposit << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	}
}

bool	Account::makeWithdrawal(int widthdrawl){

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ";";
	std::cout << "withdrawal:";

	if (widthdrawl < 0 || this->checkAmount() - widthdrawl < 0)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	else
	{
		this->_nbWithdrawals++;
		Account::_totalAmount -= widthdrawl;
		this->_amount -= widthdrawl;
		Account::_totalNbWithdrawals++;
		std::cout << widthdrawl << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
}

int	Account::checkAmount(void) const{
	return (this->_amount);
}

void	Account::displayStatus(void) const{

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;

}

void	Account::_displayTimestamp(void){

	std::chrono::time_point<std::chrono::system_clock>	now = std::chrono::system_clock::now();
	std::time_t		_time = std::chrono::system_clock::to_time_t(now);

	tm local_tm = *localtime(&_time);

	std::cout << "[" << local_tm.tm_year + 1900 << local_tm.tm_mon << local_tm.tm_mday;
	std::cout << "_" << local_tm.tm_hour << local_tm.tm_min << local_tm.tm_min;
	std::cout << "] ";
}
