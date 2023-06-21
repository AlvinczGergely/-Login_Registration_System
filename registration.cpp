#include "Registration.hpp"
#include <iostream>

Register::Register(Account& Accs) : Accounts(Accs)
{
	
}

Register::~Register()
{

}

void Register::Registrieren()
{
	std::string id, pw;
	std::cout << "Account ID:";
	std::cin >> id;

	auto user = Accounts.users.find(id);
	if (user == Accounts.users.end())
	{
		user = Accounts.admins.find(id);
		if (user == Accounts.admins.end())
		{
			std::cout << "Account PW:";
			std::cin >> pw;

			Accounts.add_account(id, pw);
			std::cout << "Sie haben sich erfolgreich registriert" << std::endl;
		}
		else
		{
			std::cout << "Account gibt es bereits" << std::endl;
		}
	}
	else
	{
		std::cout << "Account gibt es bereits" << std::endl;
	}

	std::cin.sync(); std::cin.clear();
}