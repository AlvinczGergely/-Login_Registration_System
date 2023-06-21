#include "Account.hpp"
#include "Login.hpp"
#include "Registration.hpp"

int main()
{

	Account  Accounts("Accs.txt");
	Login    Logins(Accounts);
	Register Registers(Accounts);
	int auswahl;

	while (true)
	{
		std::cin.sync(); std::cin.clear();
		system("cls");
		StartseiteMenu();
		std::cout << "Ihre Wahl:";
		std::cin >> auswahl;

		std::cin.sync(); std::cin.clear();

		switch (auswahl)
		{
		case 1:
			std::cout << "----------------Register---------------" << std::endl;
			if (Logins.Anmelden())
			{
				Logins.Startseite();
			}
			else
			{
				std::cout << "Registration was unsuccessful." << std::endl;
				std::cin.get();
				std::cin.sync(); std::cin.clear();
			}
			break;
		case 2:
			std::cout << "------------Registration---------------" << std::endl;
			Registers.Registrieren();
			break;
		case 3:
			system("cls");
			std::cout << "---------------End of Programm------------------";
			return 0;
		default:
			continue;
		}
	}

}