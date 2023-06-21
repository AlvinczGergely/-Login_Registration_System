#ifndef REGISTER_HPP
#define REGISTER_HPP

#include "Account.hpp"

class Register
{
public:
	Register(Account&);
	~Register();

	void Registrieren();
private:
	Account& Accounts;
};

#endif