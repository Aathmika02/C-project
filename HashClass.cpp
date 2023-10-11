/*
*	This file contains the hashing class. Returns the same hash key for a given string. 
*		Can either set the password, set the hash key using the passing, or get the hash key
*			Included test function to show how the class works
*	
*	Authors: Rushil Thakker, Aaron Fuller, Landon Swartz
*/

#include <iostream>
#include <functional>
#include <string>

class hashing
{
	private:
			std::int hash_key = 0;
			std::string password;
			
	public:
			void set_password(std::string_view entered_password)
			{
				password = entered_password;
			}

			int get_hash_key() const;
			{
				return hash_key;
			}

			void set_hash_key_from_password()
			{
				hash<string> hash_obj;

				hash_key = hash_obj(password);
			}
};
//	Below is a test for the above hashing class
