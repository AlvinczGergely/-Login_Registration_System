#ifndef MENUE_HPP
#define MENUE_HPP

#include <iostream>
namespace {
    void StartseiteMenu()
    {
        std::cout << "-----------Homepage------------" << std::endl;
        std::cout << "'[1]Log in                      '" << std::endl;
        std::cout << "'[2]Register                    '" << std::endl;
        std::cout << "'[3]Exit program                '" << std::endl;
        std::cout << "'-------------------------------'" << std::endl;

    }

    void LoginUsersStartseite()
    {
        std::cout << "-----------User Login Panel------------" << std::endl;
        std::cout << "'[1]Search for user                   '" << std::endl;
        std::cout << "'[2]Remove my account                 '" << std::endl;
        std::cout << "'[3]Change password                    '" << std::endl;
        std::cout << "'[4]Log out                            '" << std::endl;
        std::cout << "'-------------------------------------'" << std::endl;
    }

    void LoginAdminsStartseite()
    {
        std::cout << "-----------Admin Login Panel------------" << std::endl;
        std::cout << "'[1]Search for user                    '" << std::endl;
        std::cout << "'[2]Change password                     '" << std::endl;
        std::cout << "'[3]Change user's password              '" << std::endl;
        std::cout << "'[4]Add user account                    '" << std::endl;
        std::cout << "'[5]Remove user account                  '" << std::endl;
        std::cout << "'[6]Emergency switch                      '" << std::endl;
        std::cout << "'[7]Log out                               '" << std::endl;
        std::cout << "'[8]All users                              '" << std::endl;
        std::cout << "'--------------------------------------'" << std::endl;
    }

}
#endif