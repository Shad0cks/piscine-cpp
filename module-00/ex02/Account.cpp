#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}

void Account::_displayTimestamp(void)
{
    std::time_t result = std::time(nullptr);
    std::tm tm = *std::localtime(&result);

    std::cout << "[";
    std::cout << std::setw(4) << std::setfill ('0') << tm.tm_year + 1900;
    std::cout << std::setw(2) << std::setfill ('0') << tm.tm_mon;
    std::cout << std::setw(2) << std::setfill ('0') << tm.tm_mday;
    std::cout << "_";
    std::cout << std::setw(2) << std::setfill ('0') << tm.tm_hour;
    std::cout << std::setw(2) << std::setfill ('0') << tm.tm_min;
    std::cout << std::setw(2) << std::setfill ('0') << tm.tm_sec;
    std::cout << "]";
}

Account::Account(int initial_deposit) : _amount(initial_deposit), _nbDeposits (0), _nbWithdrawals(0)
{
    Account::_displayTimestamp();
    this->_accountIndex = Account::_nbAccounts;
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
    Account::_totalAmount += initial_deposit;
    Account::_nbAccounts++;
    return ;
}

Account::~Account(void)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits + 1 << std::endl;
    this->_amount += deposit;
    this->_nbDeposits++;

    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    return ;
}

void Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";total:" << Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits() << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (this->_amount >= withdrawal)
    {
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount - withdrawal << ";nb_withdrawals:" << this->_nbWithdrawals + 1 << std::endl;
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;

        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
        return (true);
    }
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << "refused" << std::endl;
    return (false);
}

int Account::checkAmount(void) const
{
    return (0);
}

void Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
    return ;
}