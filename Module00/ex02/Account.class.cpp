#include "Account.class.hpp"
#include <iostream>
#include <chrono>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
static int _count = 0;

Account::Account(int initial_deposit){
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	this->_accountIndex = this->_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::Account(){
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = this->_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(){
	this->_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

int Account::getNbAccounts(){
	return _nbAccounts;
}

int Account::getTotalAmount(){
	return _totalAmount;
}

int Account::getNbDeposits(){
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(){
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(){
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount" << this->_amount << ";";
	this->_amount += deposit;
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
	this->_totalNbDeposits += this->_nbDeposits;
}

bool Account::makeWithdrawal(int withdrawal){
	if (this->_amount < withdrawal){
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";
		std::cout << "withdrawal:refuse" << std::endl;
		return false;
	}
	else{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";
		this->_amount -= withdrawal;
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals++;
		std::cout << "nb_withdrawls:" << this->_nbWithdrawals << std::endl;
		this->_totalNbWithdrawals += this->_nbWithdrawals;
	}
	return true;
}

int Account::checkAmount()const{
	_count++;
	if (this->_amount < 0)
		return 0;
	return this->_amount;
}

void Account::displayStatus() const{
	Account::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;	
}

void Account::_displayTimestamp(void){
	std::time_t tt;
    struct tm t;

    tt = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    t = *localtime(&tt);
    std::cout << "[";
    std::cout << (t.tm_year + 1900);
    std::cout << t.tm_mon;
    std::cout << t.tm_mday << "_";
    std::cout << t.tm_hour;
    std::cout << t.tm_min;
    std::cout << t.tm_sec;
    std::cout << "] ";
}
