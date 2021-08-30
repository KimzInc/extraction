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
        char first, last;

        char buffer[50];

        //first character from name: example Peter - P

        do
        {
            first = my_file.get();

            my_file.ignore(40, ' ');

            last = my_file.get();

            my_file.ignore(40, '\n');

            std::cout << first << last << std::endl;

        } while (!my_file.eof());
        
       

        //do
        //{
        //    //get line gets the file line for '\n'
        //    my_file.getline(buffer, 50);

        //    //'k' is a delimiter - where it should stop 
        //   // my_file.getline(buffer, 50, 'K');

        //    std::cout << buffer << std::endl;


        //} while (!my_file.eof());
       
    }
    else
    {
        std::cout << "error opening the file" << std::endl;
    }

    


}

