// extraction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>

int main()
{
    /*
    getline(where to store the extracted characters, how many characters should be stored, delimiter)
    get
    ignore

    using the above functions to get first and second character from person's first and last name
    */
    std::fstream my_file;

    my_file.open("text.txt", std::ios::in | std::ios::binary);


    if (my_file.is_open())
    {
        //char first, 
        char last;

        char buffer[50];

        //Snippet is for first name in full and initial i.e. Peter M. 
        do
        {
            my_file.getline(buffer, 50, ' ');

            last = my_file.get();

            my_file.ignore(40, '\n');

            std::cout << buffer <<" "<< last <<". "<< std::endl;

        } while (!my_file.eof());

        // next snippet is for initials only Felix Young obtains FY

       /* do
        {
            first = my_file.get();

            my_file.ignore(40, ' ');

            last = my_file.get();

            my_file.ignore(40, '\n');

            std::cout << first << last << std::endl;

        } while (!my_file.eof());*/
        
    }
    else
    {
        std::cout << "error opening the file" << std::endl;
    }
}

