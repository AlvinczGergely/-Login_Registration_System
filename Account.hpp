#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>
#include <fstream>
#include <map>
#include <sstream>

class Account
{
    friend class Login;
	  friend class Register;                          // Login and register classes has access to Account class private variables

public:
    Account() = delete;                             // Delete the default constructor
    Account(const Account&) = delete;               // Delete the copy constructor
    Account& operator=(const Account&) = delete;    // Delete the assignment operator

    Account(const std::string&);                    // Define a constructor that takes a string parameter

    ~Account();                                     // Define destructor

    void add_account(const std::string username, const std::string password);
	  void delete_account(const std::string&);

private:
    void AktuallisiereUser();
	  void LeseUserfile();
	
	  std::fstream user_data;
	  const std::string& filename;

	  std::map<std::string, std::string> admins;    //data storage, to be replaced later by sql
	  std::map<std::string, std::string> users;
};


#endif