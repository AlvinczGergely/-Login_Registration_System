#include "Account.hpp"
#include <iostream>

Account::Account(const std::string& filename) : filename(filename)
{
    // Open the user file
    user_data.open(filename);

    // If the file does not exist, create it
    if (!user_data)
    {
        std::ofstream userd(filename);
        userd.close();
    }

    // Initialize the Admins map with a default admin account
    admins.insert({ "Test First Name", "Test second name" });

    // Read the existing user accounts from the file
    LeseUserfile();
}

Account::~Account()
{
    // Clear the error state of the user file stream
    user_data.clear();

    // Truncate the user file to remove existing content
    user_data.trunc;

    // Update the user file with the current user accounts
    AktuallisiereUser();

    // Close the user file
    user_data.close();
}

// Function to update the user file with the current user accounts
void Account::AktuallisiereUser()
{
    for (auto UserMap : users)
    {
        // Write each user account to a new line in the file
        user_data << UserMap.first << " " << UserMap.second << std::endl;
    }
}

// Function to read the existing user accounts from the file
void Account::LeseUserfile()
{
    std::string id, pw, zeile;
    std::stringstream openfilezeile;

    while (getline(user_data, zeile))
    {
        openfilezeile.str(zeile);
        openfilezeile >> id >> pw;

        // Insert each user account into the Users map
        users.insert({ id, pw });
    }
}

// Function to add a new user account
void Account::add_account(const std::string username, const std::string password)
{
    // Insert the new user account into the Users map
    users.insert({ username, password });
}

// Function to remove an existing user account
void Account::delete_account(const std::string& username)
{
    // Erase the user account from the Users map
    users.erase(username);
}
